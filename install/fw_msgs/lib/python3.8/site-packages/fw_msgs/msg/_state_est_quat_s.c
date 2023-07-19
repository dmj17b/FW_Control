// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fw_msgs:msg/StateEstQuat.idl
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
#include "fw_msgs/msg/detail/state_est_quat__struct.h"
#include "fw_msgs/msg/detail/state_est_quat__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fw_msgs__msg__state_est_quat__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("fw_msgs.msg._state_est_quat.StateEstQuat", full_classname_dest, 40) == 0);
  }
  fw_msgs__msg__StateEstQuat * ros_message = _ros_message;
  {  // x_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w
    PyObject * field = PyObject_GetAttrString(_pymsg, "w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dx_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "dx_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dx_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dy_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "dy_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dy_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dz_trans
    PyObject * field = PyObject_GetAttrString(_pymsg, "dz_trans");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dz_trans = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dx_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "dx_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dx_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dy_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "dy_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dy_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dz_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "dz_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dz_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dw
    PyObject * field = PyObject_GetAttrString(_pymsg, "dw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fw_msgs__msg__state_est_quat__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateEstQuat */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fw_msgs.msg._state_est_quat");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateEstQuat");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fw_msgs__msg__StateEstQuat * ros_message = (fw_msgs__msg__StateEstQuat *)raw_ros_message;
  {  // x_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dx_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dx_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dx_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dy_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dy_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dy_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dz_trans
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dz_trans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dz_trans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dx_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dx_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dx_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dy_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dy_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dy_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dz_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dz_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dz_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
