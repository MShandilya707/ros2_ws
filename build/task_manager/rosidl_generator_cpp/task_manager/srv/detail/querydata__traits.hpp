// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_manager:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER__SRV__DETAIL__QUERYDATA__TRAITS_HPP_
#define TASK_MANAGER__SRV__DETAIL__QUERYDATA__TRAITS_HPP_

#include "task_manager/srv/detail/querydata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_manager::srv::Querydata_Request>()
{
  return "task_manager::srv::Querydata_Request";
}

template<>
inline const char * name<task_manager::srv::Querydata_Request>()
{
  return "task_manager/srv/Querydata_Request";
}

template<>
struct has_fixed_size<task_manager::srv::Querydata_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<task_manager::srv::Querydata_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<task_manager::srv::Querydata_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_manager::srv::Querydata_Response>()
{
  return "task_manager::srv::Querydata_Response";
}

template<>
inline const char * name<task_manager::srv::Querydata_Response>()
{
  return "task_manager/srv/Querydata_Response";
}

template<>
struct has_fixed_size<task_manager::srv::Querydata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_manager::srv::Querydata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_manager::srv::Querydata_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_manager::srv::Querydata>()
{
  return "task_manager::srv::Querydata";
}

template<>
inline const char * name<task_manager::srv::Querydata>()
{
  return "task_manager/srv/Querydata";
}

template<>
struct has_fixed_size<task_manager::srv::Querydata>
  : std::integral_constant<
    bool,
    has_fixed_size<task_manager::srv::Querydata_Request>::value &&
    has_fixed_size<task_manager::srv::Querydata_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_manager::srv::Querydata>
  : std::integral_constant<
    bool,
    has_bounded_size<task_manager::srv::Querydata_Request>::value &&
    has_bounded_size<task_manager::srv::Querydata_Response>::value
  >
{
};

template<>
struct is_service<task_manager::srv::Querydata>
  : std::true_type
{
};

template<>
struct is_service_request<task_manager::srv::Querydata_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_manager::srv::Querydata_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TASK_MANAGER__SRV__DETAIL__QUERYDATA__TRAITS_HPP_
