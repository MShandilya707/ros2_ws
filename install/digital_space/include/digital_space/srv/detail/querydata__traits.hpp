// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from digital_space:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__TRAITS_HPP_
#define DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__TRAITS_HPP_

#include "digital_space/srv/detail/querydata__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<digital_space::srv::Querydata_Request>()
{
  return "digital_space::srv::Querydata_Request";
}

template<>
inline const char * name<digital_space::srv::Querydata_Request>()
{
  return "digital_space/srv/Querydata_Request";
}

template<>
struct has_fixed_size<digital_space::srv::Querydata_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<digital_space::srv::Querydata_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<digital_space::srv::Querydata_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<digital_space::srv::Querydata_Response>()
{
  return "digital_space::srv::Querydata_Response";
}

template<>
inline const char * name<digital_space::srv::Querydata_Response>()
{
  return "digital_space/srv/Querydata_Response";
}

template<>
struct has_fixed_size<digital_space::srv::Querydata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<digital_space::srv::Querydata_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<digital_space::srv::Querydata_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<digital_space::srv::Querydata>()
{
  return "digital_space::srv::Querydata";
}

template<>
inline const char * name<digital_space::srv::Querydata>()
{
  return "digital_space/srv/Querydata";
}

template<>
struct has_fixed_size<digital_space::srv::Querydata>
  : std::integral_constant<
    bool,
    has_fixed_size<digital_space::srv::Querydata_Request>::value &&
    has_fixed_size<digital_space::srv::Querydata_Response>::value
  >
{
};

template<>
struct has_bounded_size<digital_space::srv::Querydata>
  : std::integral_constant<
    bool,
    has_bounded_size<digital_space::srv::Querydata_Request>::value &&
    has_bounded_size<digital_space::srv::Querydata_Response>::value
  >
{
};

template<>
struct is_service<digital_space::srv::Querydata>
  : std::true_type
{
};

template<>
struct is_service_request<digital_space::srv::Querydata_Request>
  : std::true_type
{
};

template<>
struct is_service_response<digital_space::srv::Querydata_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIGITAL_SPACE__SRV__DETAIL__QUERYDATA__TRAITS_HPP_
