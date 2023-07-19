// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/state_est_quat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fw_msgs__msg__StateEstQuat__init(fw_msgs__msg__StateEstQuat * msg)
{
  if (!msg) {
    return false;
  }
  // x_trans
  // y_trans
  // z_trans
  // x_rot
  // y_rot
  // z_rot
  // w
  // dx_trans
  // dy_trans
  // dz_trans
  // dx_rot
  // dy_rot
  // dz_rot
  // dw
  return true;
}

void
fw_msgs__msg__StateEstQuat__fini(fw_msgs__msg__StateEstQuat * msg)
{
  if (!msg) {
    return;
  }
  // x_trans
  // y_trans
  // z_trans
  // x_rot
  // y_rot
  // z_rot
  // w
  // dx_trans
  // dy_trans
  // dz_trans
  // dx_rot
  // dy_rot
  // dz_rot
  // dw
}

bool
fw_msgs__msg__StateEstQuat__are_equal(const fw_msgs__msg__StateEstQuat * lhs, const fw_msgs__msg__StateEstQuat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_trans
  if (lhs->x_trans != rhs->x_trans) {
    return false;
  }
  // y_trans
  if (lhs->y_trans != rhs->y_trans) {
    return false;
  }
  // z_trans
  if (lhs->z_trans != rhs->z_trans) {
    return false;
  }
  // x_rot
  if (lhs->x_rot != rhs->x_rot) {
    return false;
  }
  // y_rot
  if (lhs->y_rot != rhs->y_rot) {
    return false;
  }
  // z_rot
  if (lhs->z_rot != rhs->z_rot) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // dx_trans
  if (lhs->dx_trans != rhs->dx_trans) {
    return false;
  }
  // dy_trans
  if (lhs->dy_trans != rhs->dy_trans) {
    return false;
  }
  // dz_trans
  if (lhs->dz_trans != rhs->dz_trans) {
    return false;
  }
  // dx_rot
  if (lhs->dx_rot != rhs->dx_rot) {
    return false;
  }
  // dy_rot
  if (lhs->dy_rot != rhs->dy_rot) {
    return false;
  }
  // dz_rot
  if (lhs->dz_rot != rhs->dz_rot) {
    return false;
  }
  // dw
  if (lhs->dw != rhs->dw) {
    return false;
  }
  return true;
}

bool
fw_msgs__msg__StateEstQuat__copy(
  const fw_msgs__msg__StateEstQuat * input,
  fw_msgs__msg__StateEstQuat * output)
{
  if (!input || !output) {
    return false;
  }
  // x_trans
  output->x_trans = input->x_trans;
  // y_trans
  output->y_trans = input->y_trans;
  // z_trans
  output->z_trans = input->z_trans;
  // x_rot
  output->x_rot = input->x_rot;
  // y_rot
  output->y_rot = input->y_rot;
  // z_rot
  output->z_rot = input->z_rot;
  // w
  output->w = input->w;
  // dx_trans
  output->dx_trans = input->dx_trans;
  // dy_trans
  output->dy_trans = input->dy_trans;
  // dz_trans
  output->dz_trans = input->dz_trans;
  // dx_rot
  output->dx_rot = input->dx_rot;
  // dy_rot
  output->dy_rot = input->dy_rot;
  // dz_rot
  output->dz_rot = input->dz_rot;
  // dw
  output->dw = input->dw;
  return true;
}

fw_msgs__msg__StateEstQuat *
fw_msgs__msg__StateEstQuat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstQuat * msg = (fw_msgs__msg__StateEstQuat *)allocator.allocate(sizeof(fw_msgs__msg__StateEstQuat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fw_msgs__msg__StateEstQuat));
  bool success = fw_msgs__msg__StateEstQuat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fw_msgs__msg__StateEstQuat__destroy(fw_msgs__msg__StateEstQuat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fw_msgs__msg__StateEstQuat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fw_msgs__msg__StateEstQuat__Sequence__init(fw_msgs__msg__StateEstQuat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstQuat * data = NULL;

  if (size) {
    data = (fw_msgs__msg__StateEstQuat *)allocator.zero_allocate(size, sizeof(fw_msgs__msg__StateEstQuat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fw_msgs__msg__StateEstQuat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fw_msgs__msg__StateEstQuat__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fw_msgs__msg__StateEstQuat__Sequence__fini(fw_msgs__msg__StateEstQuat__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fw_msgs__msg__StateEstQuat__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fw_msgs__msg__StateEstQuat__Sequence *
fw_msgs__msg__StateEstQuat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstQuat__Sequence * array = (fw_msgs__msg__StateEstQuat__Sequence *)allocator.allocate(sizeof(fw_msgs__msg__StateEstQuat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fw_msgs__msg__StateEstQuat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fw_msgs__msg__StateEstQuat__Sequence__destroy(fw_msgs__msg__StateEstQuat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fw_msgs__msg__StateEstQuat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fw_msgs__msg__StateEstQuat__Sequence__are_equal(const fw_msgs__msg__StateEstQuat__Sequence * lhs, const fw_msgs__msg__StateEstQuat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fw_msgs__msg__StateEstQuat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fw_msgs__msg__StateEstQuat__Sequence__copy(
  const fw_msgs__msg__StateEstQuat__Sequence * input,
  fw_msgs__msg__StateEstQuat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fw_msgs__msg__StateEstQuat);
    fw_msgs__msg__StateEstQuat * data =
      (fw_msgs__msg__StateEstQuat *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fw_msgs__msg__StateEstQuat__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fw_msgs__msg__StateEstQuat__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fw_msgs__msg__StateEstQuat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
