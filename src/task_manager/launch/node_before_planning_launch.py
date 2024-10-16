from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='digital_space',  # 包名
            executable='data_collector_node.py',  # 可执行文件名，cmake need add .py
            name='data_collector_node',  # 节点名
            output='screen'
        ),
        Node(
            package='camera_publisher',
            executable='camera_publisher',
            name='camera_publisher_node',
            output='screen'
        ),
        # Node(
        #     package='echostick_publisher',
        #     executable='echostick_publisher',
        #     name='echostick_publisher_node',
        #     output='screen'
        # ),
        Node(
            package='gps_publisher',
            executable='gps_publisher',
            name='gps_publisher_node',
            output='screen'
        ),   
        Node(
            package='task_manager',
            executable='planning.py',
            name='query_data_client',
            output='screen'
        )    
    ])
