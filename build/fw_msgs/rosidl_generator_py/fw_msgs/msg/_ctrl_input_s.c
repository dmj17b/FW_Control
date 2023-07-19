// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fw_msgs/msg/detail/ctrl_input__struct.h"
#include "fw_msgs/msg/detail/ctrl_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fw_msgs__msg__ctrl_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fw_msgs.msg._ctrl_input.CtrlInput", full_classname_dest, 33) == 0);
  }
  fw_msgs__msg__CtrlInput * ros_message = _ros_message;
  {  // ail
    PyObject * field = PyObject_GetAttrString(_pymsg, "ail");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ail = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elev
    PyObject * field = PyObject_GetAttrString(_pymsg, "elev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thr
    PyObject * field = PyObject_GetAttrString(_pymsg, "thr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rud
    PyObject * field = PyObject_GetAttrString(_pymsg, "rud");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rud = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fw_msgs__msg__ctrl_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CtrlInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fw_msgs.msg._ctrl_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CtrlInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fw_msgs__msg__CtrlInput * ros_message = (fw_msgs__msg__CtrlInput *)raw_ros_message;
  {  // ail
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ail);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rud
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rud);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rud", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
