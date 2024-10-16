// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_manager:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER__SRV__DETAIL__QUERYDATA__BUILDER_HPP_
#define TASK_MANAGER__SRV__DETAIL__QUERYDATA__BUILDER_HPP_

#include "task_manager/srv/detail/querydata__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace task_manager
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager::srv::Querydata_Request>()
{
  return ::task_manager::srv::Querydata_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace task_manager


namespace task_manager
{

namespace srv
{

namespace builder
{

class Init_Querydata_Response_latest_data
{
public:
  Init_Querydata_Response_latest_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_manager::srv::Querydata_Response latest_data(::task_manager::srv::Querydata_Response::_latest_data_type arg)
  {
    msg_.latest_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_manager::srv::Querydata_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_manager::srv::Querydata_Response>()
{
  return task_manager::srv::builder::Init_Querydata_Response_latest_data();
}

}  // namespace task_manager

#endif  // TASK_MANAGER__SRV__DETAIL__QUERYDATA__BUILDER_HPP_
