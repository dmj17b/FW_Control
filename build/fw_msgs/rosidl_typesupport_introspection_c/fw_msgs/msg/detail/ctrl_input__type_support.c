// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fw_msgs/msg/detail/ctrl_input__rosidl_typesupport_introspection_c.h"
#include "fw_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fw_msgs/msg/detail/ctrl_input__functions.h"
#include "fw_msgs/msg/detail/ctrl_input__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fw_msgs__msg__CtrlInput__init(message_memory);
}

void CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_fini_function(void * message_memory)
{
  fw_msgs__msg__CtrlInput__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_member_array[6] = {
  {
    "ail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, ail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, elev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, thr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, rud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, aux1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fw_msgs__msg__CtrlInput, aux2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_members = {
  "fw_msgs__msg",  // message namespace
  "CtrlInput",  // message name
  6,  // number of fields
  sizeof(fw_msgs__msg__CtrlInput),
  CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_member_array,  // message members
  CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_init_function,  // function to initialize message memory (memory has to be allocated)
  CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_type_support_handle = {
  0,
  &CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fw_msgs, msg, CtrlInput)() {
  if (!CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_type_support_handle.typesupport_identifier) {
    CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CtrlInput__rosidl_typesupport_introspection_c__CtrlInput_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
