#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import struct
import serial
from math import cos, sin, pi

# 确认串口设备路径
# motor_RS485_Right_port = '/dev/tty.usbserial-143330'
# motor_RS485_Left_port = '/dev/tty.usbmodem141201'
motor_PWM_port = '/dev/ttyUSB0'

# 初始化串口
# ser_485_right = serial.Serial(motor_RS485_Right_port, baudrate=38400, timeout=1)
# ser_485_left = serial.Serial(motor_RS485_Left_port, baudrate=38400, timeout=1)
ser_PWM = serial.Serial(motor_PWM_port, baudrate=115200, timeout=1)

# 单位：mm
w = 243.8 * 10
l = 485.1 * 10
theta = pi / 4

class ControllerSubscriber(Node):

    def __init__(self,ser_PWM):
        super().__init__('remote_control_propeller')
        self.subscription = self.create_subscription(
            Float64MultiArray,
            'remote_control_propeller',  # 订阅的topic名称
            self.listener_callback,
            10)
        self.subscription  # 防止未使用变量的警告
        self.controller_data = None
        # self.ser_485_left = ser_485_left
        # self.ser_485_right = ser_485_right
        self.ser_PWM = ser_PWM

    def listener_callback(self, msg):
        self.controller_data = msg.data
        self.process_data()

    def process_data(self):
        if self.controller_data:
            thrusts = thrustAllocation(self.controller_data, l, w, theta)
            thrusts = pct2analog(thrusts)
            sendData(thrusts, self.ser_PWM)

# 确定运动类型
def getMotion(controllerData):
    e_x, e_y, e_psi = controllerData[3], controllerData[4], controllerData[5]
    if e_x != 0 or e_y != 0:
        if e_x != 0 and e_y != 0:
            return "xy"
        elif e_x != 0:
            return "x"
        else:
            return "y"
    elif e_psi != 0:
        return "psi"
    return None

# 计算运动比例系数
def xMotionK(Kx, l, w, theta):
    K1 = -(l*cos(theta) - w*sin(theta)/2) / (w*cos(theta)) * Kx
    K2 = -K1
    K3 = -1 / (2*cos(theta)) * Kx
    K4 = -K3
    return [K1, K2, K3, K4]

def yMotionK(Ky, l, w, theta):
    K1 = -Ky/(cos(2*theta) - 3)
    K2 = K1
    K3 = (Ky*sin(theta))/(2*sin(theta)**2 + 2)
    K4 = K3
    return [K1, K2, K3, K4]

def mMotionK(Km, l, w, theta):
    K1 = -1/w * Km
    K2 = -K1
    K3 = 0
    K4 = 0
    return [K1, K2, K3, K4]

def getKx(proportion, e_x_max, l, w, theta):
    Kx1 = w*cos(theta) / (l*cos(theta) - w*sin(theta)/2) / e_x_max * proportion
    Kx2 = (2*cos(theta)) / e_x_max * proportion * 133/80
    return min([Kx1, Kx2])

def getKy(proportion, e_y_max, l, w, theta):
    Ky1 = -(cos(2*theta) - 3) / e_y_max * proportion
    Ky2 = (2*sin(theta)**2 + 2) / (sin(theta)) / e_y_max * proportion * 133/80
    return min([Ky1, Ky2])

def getKm(proportion, e_m_max, l, w, theta):
    return w / e_m_max * proportion

# 计算推力分配
def thrustAllocation(controllerData, l, w, theta):
    e_stop, e_x, e_y, e_psi = controllerData[2], controllerData[3], controllerData[4], controllerData[5]

    if e_stop:
        return [0, 0, 0, 0]

    motion = getMotion(controllerData)
    if motion == 'x':
        Kx = getKx(80, 100, l, w, theta)
        Kx_n = xMotionK(Kx, l, w, theta)
        T_rear_left, T_rear_right = e_x * Kx_n[0], e_x * Kx_n[1]
        T_front_left, T_front_right = e_x * Kx_n[2], e_x * Kx_n[3]

    elif motion == 'y':
        Ky = getKy(80, 100, l, w, theta)
        Ky_n = yMotionK(Ky, l, w, theta)
        T_rear_left, T_rear_right = e_y * Ky_n[0], e_y * Ky_n[1]
        T_front_left, T_front_right = e_y * Ky_n[2], e_y * Ky_n[3]

    elif motion == 'psi':
        Km = getKm(80, 100, l, w, theta)
        Km_n = mMotionK(Km, l, w, theta)
        T_rear_left, T_rear_right = e_psi * Km_n[0], e_psi * Km_n[1]
        T_front_left, T_front_right = e_psi * Km_n[2], e_psi * Km_n[3]

    else:
        Kx = getKx(30, 100, l, w, theta)
        Kx_n = xMotionK(Kx, l, w, theta)
        Ky = getKy(30, 100, l, w, theta)
        Ky_n = yMotionK(Ky, l, w, theta)
        Km = getKm(30, 100, l, w, theta)
        Km_n = mMotionK(Km, l, w, theta)
        T_rear_left = e_x * Kx_n[0] + e_y * Ky_n[0] + e_psi * Km_n[0]
        T_rear_right = e_x * Kx_n[1] + e_y * Ky_n[1] + e_psi * Km_n[1]
        T_front_left = e_x * Kx_n[2] + e_y * Ky_n[2] + e_psi * Km_n[2]
        T_front_right = e_x * Kx_n[3] + e_y * Ky_n[3] + e_psi * Km_n[3]

    thrust_percent = [T_rear_left, T_rear_right, T_front_left * 133/80, T_front_right * 133/80]
    return thrust_percent

# 推力百分比转换为模拟信号
def pct2analog(input):
    return [i / 100 * 127 for i in input]

# 数据发送到电机
def sendData(thrusts, ser_PWM):
    data = []
    for thrust in thrusts:
        direction = thrust > 0
        velocity = abs(thrust)
        direction_byte = struct.pack('B', int(direction))
        velocity_bytes = struct.pack('B', int(velocity))
        data.append(direction_byte + velocity_bytes)

    # ser_485_left.write(data[0])
    # ser_485_right.write(data[1])
    ser_PWM.write(data[2] + data[3])
    print(data, flush=True)

def main(args=None):
    rclpy.init(args=args)
    controller_node = ControllerSubscriber(ser_PWM)
    rclpy.spin(controller_node)
    controller_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
