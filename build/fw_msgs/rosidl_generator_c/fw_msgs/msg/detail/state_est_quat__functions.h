// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__FUNCTIONS_H_
#define FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fw_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fw_msgs/msg/detail/state_est_quat__struct.h"

/// Initialize msg/StateEstQuat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fw_msgs__msg__StateEstQuat
 * )) before or use
 * fw_msgs__msg__StateEstQuat__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__init(fw_msgs__msg__StateEstQuat * msg);

/// Finalize msg/StateEstQuat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
void
fw_msgs__msg__StateEstQuat__fini(fw_msgs__msg__StateEstQuat * msg);

/// Create msg/StateEstQuat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fw_msgs__msg__StateEstQuat__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
fw_msgs__msg__StateEstQuat *
fw_msgs__msg__StateEstQuat__create();

/// Destroy msg/StateEstQuat message.
/**
 * It calls
 * fw_msgs__msg__StateEstQuat__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
void
fw_msgs__msg__StateEstQuat__destroy(fw_msgs__msg__StateEstQuat * msg);

/// Check for msg/StateEstQuat message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__are_equal(const fw_msgs__msg__StateEstQuat * lhs, const fw_msgs__msg__StateEstQuat * rhs);

/// Copy a msg/StateEstQuat message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__copy(
  const fw_msgs__msg__StateEstQuat * input,
  fw_msgs__msg__StateEstQuat * output);

/// Initialize array of msg/StateEstQuat messages.
/**
 * It allocates the memory for the number of elements and calls
 * fw_msgs__msg__StateEstQuat__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__Sequence__init(fw_msgs__msg__StateEstQuat__Sequence * array, size_t size);

/// Finalize array of msg/StateEstQuat messages.
/**
 * It calls
 * fw_msgs__msg__StateEstQuat__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
void
fw_msgs__msg__StateEstQuat__Sequence__fini(fw_msgs__msg__StateEstQuat__Sequence * array);

/// Create array of msg/StateEstQuat messages.
/**
 * It allocates the memory for the array and calls
 * fw_msgs__msg__StateEstQuat__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
fw_msgs__msg__StateEstQuat__Sequence *
fw_msgs__msg__StateEstQuat__Sequence__create(size_t size);

/// Destroy array of msg/StateEstQuat messages.
/**
 * It calls
 * fw_msgs__msg__StateEstQuat__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
void
fw_msgs__msg__StateEstQuat__Sequence__destroy(fw_msgs__msg__StateEstQuat__Sequence * array);

/// Check for msg/StateEstQuat message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__Sequence__are_equal(const fw_msgs__msg__StateEstQuat__Sequence * lhs, const fw_msgs__msg__StateEstQuat__Sequence * rhs);

/// Copy an array of msg/StateEstQuat messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fw_msgs
bool
fw_msgs__msg__StateEstQuat__Sequence__copy(
  const fw_msgs__msg__StateEstQuat__Sequence * input,
  fw_msgs__msg__StateEstQuat__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__FUNCTIONS_H_
