import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import random

class EchoStickPublisher(Node):
    def __init__(self):
        super().__init__('echostick_publisher')
        self.publisher_ = self.create_publisher(Float32, 'echostick_frequency', 10)
        self.timer = self.create_timer(1.0, self.publish_frequency_data)

    def publish_frequency_data(self):
        msg = Float32()
        msg.data = random.uniform(0,440.0)  # 示例频率值（440Hz）
        self.publisher_.publish(msg)
        # self.get_logger().info(f'Publishing: {msg.data} Hz')

def main(args=None):
    rclpy.init(args=args)
    node = EchoStickPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
