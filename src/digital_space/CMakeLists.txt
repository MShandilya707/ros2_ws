cmake_minimum_required(VERSION 3.5)
project(digital_space)

# 查找依赖包
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 生成自定义服务
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Querydata.srv"
  DEPENDENCIES std_msgs sensor_msgs
)

# 安装Python包
# 由于Python代码位于 <package_name>/<package_name>/ 目录下，
# ament_python_install_package 会正确安装整个Python包，无需单独安装Python脚本


# 安装Python脚本作为可执行程序
install(PROGRAMS
  src/data_collector_node.py
  DESTINATION lib/${PROJECT_NAME}
)

# 导出依赖
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

