// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm_interfaces:msg/STMControl.idl
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
#include "stm_interfaces/msg/detail/stm_control__struct.h"
#include "stm_interfaces/msg/detail/stm_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool stm_interfaces__msg__stm_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("stm_interfaces.msg._stm_control.STMControl", full_classname_dest, 42) == 0);
  }
  stm_interfaces__msg__STMControl * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // control_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pwm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm_interfaces__msg__stm_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of STMControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm_interfaces.msg._stm_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "STMControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm_interfaces__msg__STMControl * ros_message = (stm_interfaces__msg__STMControl *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->control_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
