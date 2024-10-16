// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_manager:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_HPP_
#define TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__task_manager__srv__Querydata_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_manager__srv__Querydata_Request __declspec(deprecated)
#endif

namespace task_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Querydata_Request_
{
  using Type = Querydata_Request_<ContainerAllocator>;

  explicit Querydata_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Querydata_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    task_manager::srv::Querydata_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager::srv::Querydata_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager::srv::Querydata_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager::srv::Querydata_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager__srv__Querydata_Request
    std::shared_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager__srv__Querydata_Request
    std::shared_ptr<task_manager::srv::Querydata_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Querydata_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Querydata_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Querydata_Request_

// alias to use template instance with default allocator
using Querydata_Request =
  task_manager::srv::Querydata_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager


#ifndef _WIN32
# define DEPRECATED__task_manager__srv__Querydata_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_manager__srv__Querydata_Response __declspec(deprecated)
#endif

namespace task_manager
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Querydata_Response_
{
  using Type = Querydata_Response_<ContainerAllocator>;

  explicit Querydata_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latest_data = "";
    }
  }

  explicit Querydata_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : latest_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latest_data = "";
    }
  }

  // field types and members
  using _latest_data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _latest_data_type latest_data;

  // setters for named parameter idiom
  Type & set__latest_data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->latest_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_manager::srv::Querydata_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_manager::srv::Querydata_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_manager::srv::Querydata_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_manager::srv::Querydata_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_manager__srv__Querydata_Response
    std::shared_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_manager__srv__Querydata_Response
    std::shared_ptr<task_manager::srv::Querydata_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Querydata_Response_ & other) const
  {
    if (this->latest_data != other.latest_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Querydata_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Querydata_Response_

// alias to use template instance with default allocator
using Querydata_Response =
  task_manager::srv::Querydata_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task_manager

namespace task_manager
{

namespace srv
{

struct Querydata
{
  using Request = task_manager::srv::Querydata_Request;
  using Response = task_manager::srv::Querydata_Response;
};

}  // namespace srv

}  // namespace task_manager

#endif  // TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_HPP_
