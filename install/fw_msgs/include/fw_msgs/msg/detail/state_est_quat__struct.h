// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_H_
#define FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/StateEstQuat in the package fw_msgs.
typedef struct fw_msgs__msg__StateEstQuat
{
  float x_trans;
  float y_trans;
  float z_trans;
  float x_rot;
  float y_rot;
  float z_rot;
  float w;
  float dx_trans;
  float dy_trans;
  float dz_trans;
  float dx_rot;
  float dy_rot;
  float dz_rot;
  float dw;
} fw_msgs__msg__StateEstQuat;

// Struct for a sequence of fw_msgs__msg__StateEstQuat.
typedef struct fw_msgs__msg__StateEstQuat__Sequence
{
  fw_msgs__msg__StateEstQuat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fw_msgs__msg__StateEstQuat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_H_
