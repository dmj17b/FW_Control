// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fw_msgs:msg/StateEstEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_H_
#define FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/StateEstEuler in the package fw_msgs.
typedef struct fw_msgs__msg__StateEstEuler
{
  float x;
  float y;
  float z;
  float r;
  float p;
  float ya;
  float dx;
  float dy;
  float dz;
  float dr;
  float dp;
  float dya;
} fw_msgs__msg__StateEstEuler;

// Struct for a sequence of fw_msgs__msg__StateEstEuler.
typedef struct fw_msgs__msg__StateEstEuler__Sequence
{
  fw_msgs__msg__StateEstEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fw_msgs__msg__StateEstEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_H_
