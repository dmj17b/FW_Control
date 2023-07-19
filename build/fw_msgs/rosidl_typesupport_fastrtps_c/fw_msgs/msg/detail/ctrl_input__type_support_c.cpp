// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/ctrl_input__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fw_msgs/msg/detail/ctrl_input__struct.h"
#include "fw_msgs/msg/detail/ctrl_input__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CtrlInput__ros_msg_type = fw_msgs__msg__CtrlInput;

static bool _CtrlInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CtrlInput__ros_msg_type * ros_message = static_cast<const _CtrlInput__ros_msg_type *>(untyped_ros_message);
  // Field name: ail
  {
    cdr << ros_message->ail;
  }

  // Field name: elev
  {
    cdr << ros_message->elev;
  }

  // Field name: thr
  {
    cdr << ros_message->thr;
  }

  // Field name: rud
  {
    cdr << ros_message->rud;
  }

  // Field name: aux1
  {
    cdr << ros_message->aux1;
  }

  // Field name: aux2
  {
    cdr << ros_message->aux2;
  }

  return true;
}

static bool _CtrlInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CtrlInput__ros_msg_type * ros_message = static_cast<_CtrlInput__ros_msg_type *>(untyped_ros_message);
  // Field name: ail
  {
    cdr >> ros_message->ail;
  }

  // Field name: elev
  {
    cdr >> ros_message->elev;
  }

  // Field name: thr
  {
    cdr >> ros_message->thr;
  }

  // Field name: rud
  {
    cdr >> ros_message->rud;
  }

  // Field name: aux1
  {
    cdr >> ros_message->aux1;
  }

  // Field name: aux2
  {
    cdr >> ros_message->aux2;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fw_msgs
size_t get_serialized_size_fw_msgs__msg__CtrlInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CtrlInput__ros_msg_type * ros_message = static_cast<const _CtrlInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ail
  {
    size_t item_size = sizeof(ros_message->ail);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elev
  {
    size_t item_size = sizeof(ros_message->elev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thr
  {
    size_t item_size = sizeof(ros_message->thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rud
  {
    size_t item_size = sizeof(ros_message->rud);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1
  {
    size_t item_size = sizeof(ros_message->aux1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2
  {
    size_t item_size = sizeof(ros_message->aux2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CtrlInput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fw_msgs__msg__CtrlInput(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fw_msgs
size_t max_serialized_size_fw_msgs__msg__CtrlInput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ail
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rud
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CtrlInput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fw_msgs__msg__CtrlInput(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CtrlInput = {
  "fw_msgs::msg",
  "CtrlInput",
  _CtrlInput__cdr_serialize,
  _CtrlInput__cdr_deserialize,
  _CtrlInput__get_serialized_size,
  _CtrlInput__max_serialized_size
};

static rosidl_message_type_support_t _CtrlInput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CtrlInput,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fw_msgs, msg, CtrlInput)() {
  return &_CtrlInput__type_support;
}

#if defined(__cplusplus)
}
#endif
