// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from digital_space:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__BUILDER_HPP_
#define DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__BUILDER_HPP_

#include "digital_space/srv/detail/querydata__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace digital_space
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::digital_space::srv::Querydata_Request>()
{
  return ::digital_space::srv::Querydata_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace digital_space


namespace digital_space
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
  ::digital_space::srv::Querydata_Response latest_data(::digital_space::srv::Querydata_Response::_latest_data_type arg)
  {
    msg_.latest_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::digital_space::srv::Querydata_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::digital_space::srv::Querydata_Response>()
{
  return digital_space::srv::builder::Init_Querydata_Response_latest_data();
}

}  // namespace digital_space

#endif  // DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__BUILDER_HPP_
