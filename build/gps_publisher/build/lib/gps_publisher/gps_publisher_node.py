import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix

class GPSPublisher(Node):
    def __init__(self):
        super().__init__('gps_publisher')
        self.publisher_ = self.create_publisher(NavSatFix, 'gps_data', 10)
        self.timer_period = 1.0  # seconds
        self.timer = self.create_timer(self.timer_period, self.publish_gps_data)

    def publish_gps_data(self):
        msg = NavSatFix()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = "gps_frame"
        msg.latitude = 37.773972  # 示例纬度
        msg.longitude = -122.431297  # 示例经度
        msg.altitude = 30.0  # 示例海拔
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing GPS Data: "%s"' % msg)

def main(args=None):
    rclpy.init(args=args)
    node = GPSPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
