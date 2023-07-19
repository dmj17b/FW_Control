// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/state_est_quat__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fw_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fw_msgs/msg/detail/state_est_quat__struct.h"
#include "fw_msgs/msg/detail/state_est_quat__functions.h"
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


using _StateEstQuat__ros_msg_type = fw_msgs__msg__StateEstQuat;

static bool _StateEstQuat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateEstQuat__ros_msg_type * ros_message = static_cast<const _StateEstQuat__ros_msg_type *>(untyped_ros_message);
  // Field name: x_trans
  {
    cdr << ros_message->x_trans;
  }

  // Field name: y_trans
  {
    cdr << ros_message->y_trans;
  }

  // Field name: z_trans
  {
    cdr << ros_message->z_trans;
  }

  // Field name: x_rot
  {
    cdr << ros_message->x_rot;
  }

  // Field name: y_rot
  {
    cdr << ros_message->y_rot;
  }

  // Field name: z_rot
  {
    cdr << ros_message->z_rot;
  }

  // Field name: w
  {
    cdr << ros_message->w;
  }

  // Field name: dx_trans
  {
    cdr << ros_message->dx_trans;
  }

  // Field name: dy_trans
  {
    cdr << ros_message->dy_trans;
  }

  // Field name: dz_trans
  {
    cdr << ros_message->dz_trans;
  }

  // Field name: dx_rot
  {
    cdr << ros_message->dx_rot;
  }

  // Field name: dy_rot
  {
    cdr << ros_message->dy_rot;
  }

  // Field name: dz_rot
  {
    cdr << ros_message->dz_rot;
  }

  // Field name: dw
  {
    cdr << ros_message->dw;
  }

  return true;
}

static bool _StateEstQuat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateEstQuat__ros_msg_type * ros_message = static_cast<_StateEstQuat__ros_msg_type *>(untyped_ros_message);
  // Field name: x_trans
  {
    cdr >> ros_message->x_trans;
  }

  // Field name: y_trans
  {
    cdr >> ros_message->y_trans;
  }

  // Field name: z_trans
  {
    cdr >> ros_message->z_trans;
  }

  // Field name: x_rot
  {
    cdr >> ros_message->x_rot;
  }

  // Field name: y_rot
  {
    cdr >> ros_message->y_rot;
  }

  // Field name: z_rot
  {
    cdr >> ros_message->z_rot;
  }

  // Field name: w
  {
    cdr >> ros_message->w;
  }

  // Field name: dx_trans
  {
    cdr >> ros_message->dx_trans;
  }

  // Field name: dy_trans
  {
    cdr >> ros_message->dy_trans;
  }

  // Field name: dz_trans
  {
    cdr >> ros_message->dz_trans;
  }

  // Field name: dx_rot
  {
    cdr >> ros_message->dx_rot;
  }

  // Field name: dy_rot
  {
    cdr >> ros_message->dy_rot;
  }

  // Field name: dz_rot
  {
    cdr >> ros_message->dz_rot;
  }

  // Field name: dw
  {
    cdr >> ros_message->dw;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fw_msgs
size_t get_serialized_size_fw_msgs__msg__StateEstQuat(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateEstQuat__ros_msg_type * ros_message = static_cast<const _StateEstQuat__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_trans
  {
    size_t item_size = sizeof(ros_message->x_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_trans
  {
    size_t item_size = sizeof(ros_message->y_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_trans
  {
    size_t item_size = sizeof(ros_message->z_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_rot
  {
    size_t item_size = sizeof(ros_message->x_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_rot
  {
    size_t item_size = sizeof(ros_message->y_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_rot
  {
    size_t item_size = sizeof(ros_message->z_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w
  {
    size_t item_size = sizeof(ros_message->w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dx_trans
  {
    size_t item_size = sizeof(ros_message->dx_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dy_trans
  {
    size_t item_size = sizeof(ros_message->dy_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dz_trans
  {
    size_t item_size = sizeof(ros_message->dz_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dx_rot
  {
    size_t item_size = sizeof(ros_message->dx_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dy_rot
  {
    size_t item_size = sizeof(ros_message->dy_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dz_rot
  {
    size_t item_size = sizeof(ros_message->dz_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dw
  {
    size_t item_size = sizeof(ros_message->dw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StateEstQuat__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fw_msgs__msg__StateEstQuat(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fw_msgs
size_t max_serialized_size_fw_msgs__msg__StateEstQuat(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dx_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dy_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dz_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dx_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dy_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dz_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _StateEstQuat__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fw_msgs__msg__StateEstQuat(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StateEstQuat = {
  "fw_msgs::msg",
  "StateEstQuat",
  _StateEstQuat__cdr_serialize,
  _StateEstQuat__cdr_deserialize,
  _StateEstQuat__get_serialized_size,
  _StateEstQuat__max_serialized_size
};

static rosidl_message_type_support_t _StateEstQuat__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateEstQuat,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fw_msgs, msg, StateEstQuat)() {
  return &_StateEstQuat__type_support;
}

#if defined(__cplusplus)
}
#endif
