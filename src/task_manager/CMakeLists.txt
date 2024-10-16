cmake_minimum_required(VERSION 3.5)
project(task_manager)

# 查找依赖的包
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)



# 生成自定义服务和消息
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Querydata.srv"
  DEPENDENCIES std_msgs
)

# # 安装Python代码
# ament_python_install_package(${PROJECT_NAME})

# 安装Python节点和脚本
install(PROGRAMS
  src/planning.py
  DESTINATION lib/${PROJECT_NAME}
)

# 安装launch文件等其他资源
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

