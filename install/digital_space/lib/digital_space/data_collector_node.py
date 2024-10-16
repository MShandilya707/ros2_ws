#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from sensor_msgs.msg import NavSatFix, Image
import datetime
from digital_space.srv import  Querydata

class DataCollector(Node):
    def __init__(self):
        super().__init__('data_collector')
        self.latest_image_data = None
        self.latest_gps_data = None
        self.latest_frequency_data = None
        self.latest_data_with_time = "No data collected yet"

        # 创建图像数据的订阅器
        self.subscription_image = self.create_subscription(
            Image,
            'camera_image',
            self.image_callback,
            10)
        # 创建GPS数据的订阅器
        self.subscription_gps = self.create_subscription(
            NavSatFix,
            'gps_data',
            self.gps_callback,
            10)
        # 创建频率数据的订阅器
        self.subscription_frequency = self.create_subscription(
            Float32,
            'echostick_frequency',
            self.frequency_callback,
            10)

        # 定义定时器，周期性执行数据写入文件的操作
        self.timer = self.create_timer(1, self.write_all_sensors_data_to_file)
        # 创建服务，用于响应数据查询请求
        self.srv = self.create_service(Querydata, 'query_data_sensor', self.query_data_callback)

    # 图像数据的回调函数
    def image_callback(self, msg):
        self.latest_image_data = f"Image Timestamp: {msg.header.stamp}"

    # GPS数据的回调函数
    def gps_callback(self, msg):
        self.latest_gps_data = f"GPS: Lat {msg.latitude}, Lon {msg.longitude}, Alt {msg.altitude}"

    # 频率数据的回调函数
    def frequency_callback(self, msg):
        self.latest_frequency_data = f"Frequency: {msg.data} Hz"

    # 将所有传感器数据写入文件
    def write_all_sensors_data_to_file(self):
        data = f"{self.latest_image_data}\n{self.latest_gps_data}\n{self.latest_frequency_data}\n"
        timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        data_with_time = f"{timestamp} - {data}"
        self.latest_data_with_time = data_with_time
        with open('data_log.txt', 'a') as file:
            file.write(data_with_time)

    # 服务请求的回调函数
    def query_data_callback(self, request, response):
        response.latest_data = self.latest_data_with_time
        return response

def main(args=None):
    rclpy.init(args=args)
    data_collector = DataCollector()
    rclpy.spin(data_collector)
    # 节点销毁前的清理操作
    data_collector.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
