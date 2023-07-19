// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__CTRL_INPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FW_MSGS__MSG__DETAIL__CTRL_INPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fw_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fw_msgs/msg/detail/ctrl_input__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace fw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
cdr_serialize(
  const fw_msgs::msg::CtrlInput & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fw_msgs::msg::CtrlInput & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
get_serialized_size(
  const fw_msgs::msg::CtrlInput & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
max_serialized_size_CtrlInput(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fw_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fw_msgs, msg, CtrlInput)();

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__CTRL_INPUT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_