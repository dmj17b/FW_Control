// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice
#include "fw_msgs/msg/detail/ctrl_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fw_msgs__msg__CtrlInput__init(fw_msgs__msg__CtrlInput * msg)
{
  if (!msg) {
    return false;
  }
  // ail
  // elev
  // thr
  // rud
  // aux1
  // aux2
  return true;
}

void
fw_msgs__msg__CtrlInput__fini(fw_msgs__msg__CtrlInput * msg)
{
  if (!msg) {
    return;
  }
  // ail
  // elev
  // thr
  // rud
  // aux1
  // aux2
}

bool
fw_msgs__msg__CtrlInput__are_equal(const fw_msgs__msg__CtrlInput * lhs, const fw_msgs__msg__CtrlInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ail
  if (lhs->ail != rhs->ail) {
    return false;
  }
  // elev
  if (lhs->elev != rhs->elev) {
    return false;
  }
  // thr
  if (lhs->thr != rhs->thr) {
    return false;
  }
  // rud
  if (lhs->rud != rhs->rud) {
    return false;
  }
  // aux1
  if (lhs->aux1 != rhs->aux1) {
    return false;
  }
  // aux2
  if (lhs->aux2 != rhs->aux2) {
    return false;
  }
  return true;
}

bool
fw_msgs__msg__CtrlInput__copy(
  const fw_msgs__msg__CtrlInput * input,
  fw_msgs__msg__CtrlInput * output)
{
  if (!input || !output) {
    return false;
  }
  // ail
  output->ail = input->ail;
  // elev
  output->elev = input->elev;
  // thr
  output->thr = input->thr;
  // rud
  output->rud = input->rud;
  // aux1
  output->aux1 = input->aux1;
  // aux2
  output->aux2 = input->aux2;
  return true;
}

fw_msgs__msg__CtrlInput *
fw_msgs__msg__CtrlInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__CtrlInput * msg = (fw_msgs__msg__CtrlInput *)allocator.allocate(sizeof(fw_msgs__msg__CtrlInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fw_msgs__msg__CtrlInput));
  bool success = fw_msgs__msg__CtrlInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fw_msgs__msg__CtrlInput__destroy(fw_msgs__msg__CtrlInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fw_msgs__msg__CtrlInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fw_msgs__msg__CtrlInput__Sequence__init(fw_msgs__msg__CtrlInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__CtrlInput * data = NULL;

  if (size) {
    data = (fw_msgs__msg__CtrlInput *)allocator.zero_allocate(size, sizeof(fw_msgs__msg__CtrlInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fw_msgs__msg__CtrlInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fw_msgs__msg__CtrlInput__fini(&data[i - 1]);
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
fw_msgs__msg__CtrlInput__Sequence__fini(fw_msgs__msg__CtrlInput__Sequence * array)
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
      fw_msgs__msg__CtrlInput__fini(&array->data[i]);
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

fw_msgs__msg__CtrlInput__Sequence *
fw_msgs__msg__CtrlInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fw_msgs__msg__CtrlInput__Sequence * array = (fw_msgs__msg__CtrlInput__Sequence *)allocator.allocate(sizeof(fw_msgs__msg__CtrlInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fw_msgs__msg__CtrlInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fw_msgs__msg__CtrlInput__Sequence__destroy(fw_msgs__msg__CtrlInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fw_msgs__msg__CtrlInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fw_msgs__msg__CtrlInput__Sequence__are_equal(const fw_msgs__msg__CtrlInput__Sequence * lhs, const fw_msgs__msg__CtrlInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fw_msgs__msg__CtrlInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fw_msgs__msg__CtrlInput__Sequence__copy(
  const fw_msgs__msg__CtrlInput__Sequence * input,
  fw_msgs__msg__CtrlInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fw_msgs__msg__CtrlInput);
    fw_msgs__msg__CtrlInput * data =
      (fw_msgs__msg__CtrlInput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fw_msgs__msg__CtrlInput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fw_msgs__msg__CtrlInput__fini(&data[i]);
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
    if (!fw_msgs__msg__CtrlInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
