// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/state_est_quat__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fw_msgs/msg/detail/state_est_quat__struct.hpp"

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
  const fw_msgs::msg::StateEstQuat & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_trans
  cdr << ros_message.x_trans;
  // Member: y_trans
  cdr << ros_message.y_trans;
  // Member: z_trans
  cdr << ros_message.z_trans;
  // Member: x_rot
  cdr << ros_message.x_rot;
  // Member: y_rot
  cdr << ros_message.y_rot;
  // Member: z_rot
  cdr << ros_message.z_rot;
  // Member: w
  cdr << ros_message.w;
  // Member: dx_trans
  cdr << ros_message.dx_trans;
  // Member: dy_trans
  cdr << ros_message.dy_trans;
  // Member: dz_trans
  cdr << ros_message.dz_trans;
  // Member: dx_rot
  cdr << ros_message.dx_rot;
  // Member: dy_rot
  cdr << ros_message.dy_rot;
  // Member: dz_rot
  cdr << ros_message.dz_rot;
  // Member: dw
  cdr << ros_message.dw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fw_msgs::msg::StateEstQuat & ros_message)
{
  // Member: x_trans
  cdr >> ros_message.x_trans;

  // Member: y_trans
  cdr >> ros_message.y_trans;

  // Member: z_trans
  cdr >> ros_message.z_trans;

  // Member: x_rot
  cdr >> ros_message.x_rot;

  // Member: y_rot
  cdr >> ros_message.y_rot;

  // Member: z_rot
  cdr >> ros_message.z_rot;

  // Member: w
  cdr >> ros_message.w;

  // Member: dx_trans
  cdr >> ros_message.dx_trans;

  // Member: dy_trans
  cdr >> ros_message.dy_trans;

  // Member: dz_trans
  cdr >> ros_message.dz_trans;

  // Member: dx_rot
  cdr >> ros_message.dx_rot;

  // Member: dy_rot
  cdr >> ros_message.dy_rot;

  // Member: dz_rot
  cdr >> ros_message.dz_rot;

  // Member: dw
  cdr >> ros_message.dw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
get_serialized_size(
  const fw_msgs::msg::StateEstQuat & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_trans
  {
    size_t item_size = sizeof(ros_message.x_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_trans
  {
    size_t item_size = sizeof(ros_message.y_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_trans
  {
    size_t item_size = sizeof(ros_message.z_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_rot
  {
    size_t item_size = sizeof(ros_message.x_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_rot
  {
    size_t item_size = sizeof(ros_message.y_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_rot
  {
    size_t item_size = sizeof(ros_message.z_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w
  {
    size_t item_size = sizeof(ros_message.w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dx_trans
  {
    size_t item_size = sizeof(ros_message.dx_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dy_trans
  {
    size_t item_size = sizeof(ros_message.dy_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dz_trans
  {
    size_t item_size = sizeof(ros_message.dz_trans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dx_rot
  {
    size_t item_size = sizeof(ros_message.dx_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dy_rot
  {
    size_t item_size = sizeof(ros_message.dy_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dz_rot
  {
    size_t item_size = sizeof(ros_message.dz_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dw
  {
    size_t item_size = sizeof(ros_message.dw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fw_msgs
max_serialized_size_StateEstQuat(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dx_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dy_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dz_trans
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dx_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dy_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dz_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StateEstQuat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fw_msgs::msg::StateEstQuat *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateEstQuat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fw_msgs::msg::StateEstQuat *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateEstQuat__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fw_msgs::msg::StateEstQuat *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateEstQuat__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StateEstQuat(full_bounded, 0);
}

static message_type_support_callbacks_t _StateEstQuat__callbacks = {
  "fw_msgs::msg",
  "StateEstQuat",
  _StateEstQuat__cdr_serialize,
  _StateEstQuat__cdr_deserialize,
  _StateEstQuat__get_serialized_size,
  _StateEstQuat__max_serialized_size
};

static rosidl_message_type_support_t _StateEstQuat__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateEstQuat__callbacks,
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
get_message_type_support_handle<fw_msgs::msg::StateEstQuat>()
{
  return &fw_msgs::msg::typesupport_fastrtps_cpp::_StateEstQuat__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fw_msgs, msg, StateEstQuat)() {
  return &fw_msgs::msg::typesupport_fastrtps_cpp::_StateEstQuat__handle;
}

#ifdef __cplusplus
}
#endif
