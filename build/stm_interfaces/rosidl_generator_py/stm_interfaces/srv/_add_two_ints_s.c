// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm_interfaces:srv/AddTwoInts.idl
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
#include "stm_interfaces/srv/detail/add_two_ints__struct.h"
#include "stm_interfaces/srv/detail/add_two_ints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm_interfaces__srv__add_two_ints__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("stm_interfaces.srv._add_two_ints.AddTwoInts_Request", full_classname_dest, 51) == 0);
  }
  stm_interfaces__srv__AddTwoInts_Request * ros_message = _ros_message;
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->a = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm_interfaces__srv__add_two_ints__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddTwoInts_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm_interfaces.srv._add_two_ints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddTwoInts_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm_interfaces__srv__AddTwoInts_Request * ros_message = (stm_interfaces__srv__AddTwoInts_Request *)raw_ros_message;
  {  // a
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "stm_interfaces/srv/detail/add_two_ints__struct.h"
// already included above
// #include "stm_interfaces/srv/detail/add_two_ints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm_interfaces__srv__add_two_ints__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("stm_interfaces.srv._add_two_ints.AddTwoInts_Response", full_classname_dest, 52) == 0);
  }
  stm_interfaces__srv__AddTwoInts_Response * ros_message = _ros_message;
  {  // sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm_interfaces__srv__add_two_ints__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AddTwoInts_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm_interfaces.srv._add_two_ints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AddTwoInts_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm_interfaces__srv__AddTwoInts_Response * ros_message = (stm_interfaces__srv__AddTwoInts_Response *)raw_ros_message;
  {  // sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
