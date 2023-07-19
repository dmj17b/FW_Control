// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/ctrl_input__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fw_msgs/msg/detail/ctrl_input__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ail
  cdr << ros_message.ail;
  // Member: elev
  cdr << ros_message.elev;
  // Member: thr
  cdr << ros_message.thr;
  // Member: rud
  cdr << ros_message.rud;
  // Member: aux1
  cdr << ros_message.aux1;
  // Member: aux2
  cdr << ros_message.aux2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fw_msgs::msg::CtrlInput & ros_message)
{
  // Member: ail
  cdr >> ros_message.ail;

  // Member: elev
  cdr >> ros_message.elev;

  // Member: thr
  cdr >> ros_message.thr;

  // Member: rud
  cdr >> ros_message.rud;

  // Member: aux1
  cdr >> ros_message.aux1;

  // Member: aux2
  cdr >> ros_message.aux2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
get_serialized_size(
  const fw_msgs::msg::CtrlInput & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ail
  {
    size_t item_size = sizeof(ros_message.ail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elev
  {
    size_t item_size = sizeof(ros_message.elev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thr
  {
    size_t item_size = sizeof(ros_message.thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rud
  {
    size_t item_size = sizeof(ros_message.rud);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1
  {
    size_t item_size = sizeof(ros_message.aux1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2
  {
    size_t item_size = sizeof(ros_message.aux2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
max_serialized_size_CtrlInput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rud
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CtrlInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fw_msgs::msg::CtrlInput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CtrlInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fw_msgs::msg::CtrlInput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CtrlInput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fw_msgs::msg::CtrlInput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CtrlInput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CtrlInput(full_bounded, 0);
}

static message_type_support_callbacks_t _CtrlInput__callbacks = {
  "fw_msgs::msg",
  "CtrlInput",
  _CtrlInput__cdr_serialize,
  _CtrlInput__cdr_deserialize,
  _CtrlInput__get_serialized_size,
  _CtrlInput__max_serialized_size
};

static rosidl_message_type_support_t _CtrlInput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CtrlInput__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fw_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fw_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fw_msgs::msg::CtrlInput>()
{
  return &fw_msgs::msg::typesupport_fastrtps_cpp::_CtrlInput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fw_msgs, msg, CtrlInput)() {
  return &fw_msgs::msg::typesupport_fastrtps_cpp::_CtrlInput__handle;
}

#ifdef __cplusplus
}
#endif
