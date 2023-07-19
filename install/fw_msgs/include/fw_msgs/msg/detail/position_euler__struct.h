// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fw_msgs:msg/PositionEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_H_
#define FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PositionEuler in the package fw_msgs.
typedef struct fw_msgs__msg__PositionEuler
{
  float x_trans;
  float y_trans;
  float z_trans;
  float roll;
  float pitch;
  float yaw;
} fw_msgs__msg__PositionEuler;

// Struct for a sequence of fw_msgs__msg__PositionEuler.
typedef struct fw_msgs__msg__PositionEuler__Sequence
{
  fw_msgs__msg__PositionEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fw_msgs__msg__PositionEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_H_
