// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fw_msgs:msg/StateEstEuler.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/state_est_euler__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fw_msgs__msg__StateEstEuler__init(fw_msgs__msg__StateEstEuler * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // r
  // p
  // ya
  // dx
  // dy
  // dz
  // dr
  // dp
  // dya
  return true;
}

void
fw_msgs__msg__StateEstEuler__fini(fw_msgs__msg__StateEstEuler * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // r
  // p
  // ya
  // dx
  // dy
  // dz
  // dr
  // dp
  // dya
}

bool
fw_msgs__msg__StateEstEuler__are_equal(const fw_msgs__msg__StateEstEuler * lhs, const fw_msgs__msg__StateEstEuler * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // p
  if (lhs->p != rhs->p) {
    return false;
  }
  // ya
  if (lhs->ya != rhs->ya) {
    return false;
  }
  // dx
  if (lhs->dx != rhs->dx) {
    return false;
  }
  // dy
  if (lhs->dy != rhs->dy) {
    return false;
  }
  // dz
  if (lhs->dz != rhs->dz) {
    return false;
  }
  // dr
  if (lhs->dr != rhs->dr) {
    return false;
  }
  // dp
  if (lhs->dp != rhs->dp) {
    return false;
  }
  // dya
  if (lhs->dya != rhs->dya) {
    return false;
  }
  return true;
}

bool
fw_msgs__msg__StateEstEuler__copy(
  const fw_msgs__msg__StateEstEuler * input,
  fw_msgs__msg__StateEstEuler * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // r
  output->r = input->r;
  // p
  output->p = input->p;
  // ya
  output->ya = input->ya;
  // dx
  output->dx = input->dx;
  // dy
  output->dy = input->dy;
  // dz
  output->dz = input->dz;
  // dr
  output->dr = input->dr;
  // dp
  output->dp = input->dp;
  // dya
  output->dya = input->dya;
  return true;
}

fw_msgs__msg__StateEstEuler *
fw_msgs__msg__StateEstEuler__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstEuler * msg = (fw_msgs__msg__StateEstEuler *)allocator.allocate(sizeof(fw_msgs__msg__StateEstEuler), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fw_msgs__msg__StateEstEuler));
  bool success = fw_msgs__msg__StateEstEuler__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fw_msgs__msg__StateEstEuler__destroy(fw_msgs__msg__StateEstEuler * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fw_msgs__msg__StateEstEuler__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fw_msgs__msg__StateEstEuler__Sequence__init(fw_msgs__msg__StateEstEuler__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstEuler * data = NULL;

  if (size) {
    data = (fw_msgs__msg__StateEstEuler *)allocator.zero_allocate(size, sizeof(fw_msgs__msg__StateEstEuler), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fw_msgs__msg__StateEstEuler__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fw_msgs__msg__StateEstEuler__fini(&data[i - 1]);
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
fw_msgs__msg__StateEstEuler__Sequence__fini(fw_msgs__msg__StateEstEuler__Sequence * array)
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
      fw_msgs__msg__StateEstEuler__fini(&array->data[i]);
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

fw_msgs__msg__StateEstEuler__Sequence *
fw_msgs__msg__StateEstEuler__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__StateEstEuler__Sequence * array = (fw_msgs__msg__StateEstEuler__Sequence *)allocator.allocate(sizeof(fw_msgs__msg__StateEstEuler__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fw_msgs__msg__StateEstEuler__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fw_msgs__msg__StateEstEuler__Sequence__destroy(fw_msgs__msg__StateEstEuler__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fw_msgs__msg__StateEstEuler__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fw_msgs__msg__StateEstEuler__Sequence__are_equal(const fw_msgs__msg__StateEstEuler__Sequence * lhs, const fw_msgs__msg__StateEstEuler__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fw_msgs__msg__StateEstEuler__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fw_msgs__msg__StateEstEuler__Sequence__copy(
  const fw_msgs__msg__StateEstEuler__Sequence * input,
  fw_msgs__msg__StateEstEuler__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fw_msgs__msg__StateEstEuler);
    fw_msgs__msg__StateEstEuler * data =
      (fw_msgs__msg__StateEstEuler *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fw_msgs__msg__StateEstEuler__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fw_msgs__msg__StateEstEuler__fini(&data[i]);
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
    if (!fw_msgs__msg__StateEstEuler__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
