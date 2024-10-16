#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from digital_space.srv import Querydata  
from std_msgs.msg import String  # 使用标准的ROS 2消息类型
from std_msgs.msg import Float64MultiArray  # 用于发布多维数组数据

class Plan:
    def __init__(self, client_node):
        self.client_node = client_node
        # 创建一个计时器，每隔一秒钟调用一次 self.request_data 方法
        self.timer = client_node.create_timer(1.0, self.request_data)

    def request_data(self):
        # 调用 QueryDataClientNode 实例的 send_service_request 方法发送服务请求
        self.client_node.send_service_request()

class QueryDataClientNode(Node):
    def __init__(self):
        super().__init__('query_data_client')
        self.client = self.create_client(Querydata, 'query_data_sensor')  
        
        # 将服务等待放入单独的方法中，以异步方式检查服务可用性
        self.ensure_service_available()
        
        # 添加一个订阅者，订阅上文中的发布者发布的信息
        self.subscriber = self.create_subscription(String, 'remote_control', self.remote_control_callback, 10)

        # 创建发布者
        self.publisher = self.create_publisher(Float64MultiArray, 'remote_control_propeller', 10)
        
        # 初始化数据
        self.controller_data = [0, 0, 0, 0, 0, 0]
        
        # 创建 Plan 类的实例，开始周期性请求数据
        self.plan = Plan(self)

    def ensure_service_available(self):
        if not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
            # 使用定时器重新尝试连接，避免阻塞构造函数
            self.create_timer(1.0, self.ensure_service_available)
        else:
            self.send_service_request()

    def send_service_request(self):
        self.request = Querydata.Request()  
        self.future = self.client.call_async(self.request)
        self.future.add_done_callback(self.response_callback)

    def response_callback(self, future):
        try:
            response = future.result()
            if response:
                latest_data = response.latest_data  # 使用服务的响应
                self.process_and_publish_data(latest_data)
                # self.get_logger().info('Published data based on service response')
        except Exception as e:
            self.get_logger().error(f'Failed to call service: {e}')

    def process_and_publish_data(self, latest_data):
        # 假设处理数据
        # 此处省略数据处理细节
        # self.get_logger().info(f'Processed data: {latest_data}')
        
        # 发布数据
        msg = Float64MultiArray(data=self.controller_data)
        self.publisher.publish(msg)
        # self.get_logger().info('Published controller data')

    def remote_control_callback(self, msg):
        # 打印接收到的信息
        # self.get_logger().info(f'Received remote control message: {msg.data}')

        # 根据接收到的信息执行不同的逻辑
        if msg.data == "Press Ahead":
            # self.get_logger().info("Executing logic for Press Ahead")
            self.controller_data[4] = 100.0 
        elif msg.data == "Release Ahead":
            # self.get_logger().info("Executing logic for Release Ahead")
            self.controller_data[4] = 0.0
        elif msg.data == "Press Left":
            # self.get_logger().info("Executing logic for Press Left")
            self.controller_data[3] = 100.0
        elif msg.data == "Release Left":
            # self.get_logger().info("Executing logic for Release Left")
            self.controller_data[3] = 0.0
        elif msg.data == "Press Right":
            # self.get_logger().info("Executing logic for Press Right")
            self.controller_data[3] = -100.0
        elif msg.data == "Release Right":
            # self.get_logger().info("Executing logic for Release Right")
            self.controller_data[3] = 0.0
        elif msg.data == "Press Back":
            # self.get_logger().info("Executing logic for Press Back")
            self.controller_data[4] = -100.0
        elif msg.data == "Release Back":
            # self.get_logger().info("Executing logic for Release Back")
            self.controller_data[4] = 0.0
        # elif msg.data == "Press Motor 1":
        #     self.get_logger().info("Executing logic for Press Motor 1")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Release Motor 1":
        #     self.get_logger().info("Executing logic for Release Motor 1")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Press Motor 2":
        #     self.get_logger().info("Executing logic for Press Motor 2")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Release Motor 2":
        #     self.get_logger().info("Executing logic for Release Motor 2")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Press Motor 3":
        #     self.get_logger().info("Executing logic for Press Motor 3")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Release Motor 3":
        #     self.get_logger().info("Executing logic for Release Motor 3")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Press Motor 4":
        #     self.get_logger().info("Executing logic for Press Motor 4")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Release Motor 4":
        #     self.get_logger().info("Executing logic for Release Motor 4")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Mode 1":
        #     self.get_logger().info("Executing logic for Mode 1")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Mode 2":
        #     self.get_logger().info("Executing logic for Mode 2")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Mode 3":
        #     self.get_logger().info("Executing logic for Mode 3")
        #     # 在这里添加相应的处理逻辑
        # elif msg.data == "Mode 4":
        #     self.get_logger().info("Executing logic for Mode 4")
        #     # 在这里添加相应的处理逻辑

def main(args=None):
    rclpy.init(args=args)
    query_data_client = QueryDataClientNode()
    rclpy.spin(query_data_client)
    query_data_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
