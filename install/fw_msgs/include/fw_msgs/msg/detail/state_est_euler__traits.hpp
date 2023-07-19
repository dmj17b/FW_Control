// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fw_msgs:msg/StateEstEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_EULER__TRAITS_HPP_
#define FW_MSGS__MSG__DETAIL__STATE_EST_EULER__TRAITS_HPP_

#include "fw_msgs/msg/detail/state_est_euler__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fw_msgs::msg::StateEstEuler>()
{
  return "fw_msgs::msg::StateEstEuler";
}

template<>
inline const char * name<fw_msgs::msg::StateEstEuler>()
{
  return "fw_msgs/msg/StateEstEuler";
}

template<>
struct has_fixed_size<fw_msgs::msg::StateEstEuler>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fw_msgs::msg::StateEstEuler>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fw_msgs::msg::StateEstEuler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_EULER__TRAITS_HPP_
