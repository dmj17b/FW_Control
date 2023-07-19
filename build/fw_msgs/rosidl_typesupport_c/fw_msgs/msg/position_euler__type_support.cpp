// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from fw_msgs:msg/PositionEuler.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "fw_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "fw_msgs/msg/detail/position_euler__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace fw_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PositionEuler_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PositionEuler_type_support_ids_t;

static const _PositionEuler_type_support_ids_t _PositionEuler_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PositionEuler_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PositionEuler_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PositionEuler_type_support_symbol_names_t _PositionEuler_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fw_msgs, msg, PositionEuler)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fw_msgs, msg, PositionEuler)),
  }
};

typedef struct _PositionEuler_type_support_data_t
{
  void * data[2];
} _PositionEuler_type_support_data_t;

static _PositionEuler_type_support_data_t _PositionEuler_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PositionEuler_message_typesupport_map = {
  2,
  "fw_msgs",
  &_PositionEuler_message_typesupport_ids.typesupport_identifier[0],
  &_PositionEuler_message_typesupport_symbol_names.symbol_name[0],
  &_PositionEuler_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PositionEuler_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PositionEuler_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace fw_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_fw_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, fw_msgs, msg, PositionEuler)() {
  return &::fw_msgs::msg::rosidl_typesupport_c::PositionEuler_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
