// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_H_
#define FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CtrlInput in the package fw_msgs.
typedef struct fw_msgs__msg__CtrlInput
{
  float ail;
  float elev;
  float thr;
  float rud;
  float aux1;
  float aux2;
} fw_msgs__msg__CtrlInput;

// Struct for a sequence of fw_msgs__msg__CtrlInput.
typedef struct fw_msgs__msg__CtrlInput__Sequence
{
  fw_msgs__msg__CtrlInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fw_msgs__msg__CtrlInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_H_
