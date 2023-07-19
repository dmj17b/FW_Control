// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_HPP_
#define FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fw_msgs__msg__CtrlInput __attribute__((deprecated))
#else
# define DEPRECATED__fw_msgs__msg__CtrlInput __declspec(deprecated)
#endif

namespace fw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtrlInput_
{
  using Type = CtrlInput_<ContainerAllocator>;

  explicit CtrlInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ail = 0.0f;
      this->elev = 0.0f;
      this->thr = 0.0f;
      this->rud = 0.0f;
      this->aux1 = 0.0f;
      this->aux2 = 0.0f;
    }
  }

  explicit CtrlInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ail = 0.0f;
      this->elev = 0.0f;
      this->thr = 0.0f;
      this->rud = 0.0f;
      this->aux1 = 0.0f;
      this->aux2 = 0.0f;
    }
  }

  // field types and members
  using _ail_type =
    float;
  _ail_type ail;
  using _elev_type =
    float;
  _elev_type elev;
  using _thr_type =
    float;
  _thr_type thr;
  using _rud_type =
    float;
  _rud_type rud;
  using _aux1_type =
    float;
  _aux1_type aux1;
  using _aux2_type =
    float;
  _aux2_type aux2;

  // setters for named parameter idiom
  Type & set__ail(
    const float & _arg)
  {
    this->ail = _arg;
    return *this;
  }
  Type & set__elev(
    const float & _arg)
  {
    this->elev = _arg;
    return *this;
  }
  Type & set__thr(
    const float & _arg)
  {
    this->thr = _arg;
    return *this;
  }
  Type & set__rud(
    const float & _arg)
  {
    this->rud = _arg;
    return *this;
  }
  Type & set__aux1(
    const float & _arg)
  {
    this->aux1 = _arg;
    return *this;
  }
  Type & set__aux2(
    const float & _arg)
  {
    this->aux2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fw_msgs::msg::CtrlInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const fw_msgs::msg::CtrlInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::CtrlInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::CtrlInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fw_msgs__msg__CtrlInput
    std::shared_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fw_msgs__msg__CtrlInput
    std::shared_ptr<fw_msgs::msg::CtrlInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtrlInput_ & other) const
  {
    if (this->ail != other.ail) {
      return false;
    }
    if (this->elev != other.elev) {
      return false;
    }
    if (this->thr != other.thr) {
      return false;
    }
    if (this->rud != other.rud) {
      return false;
    }
    if (this->aux1 != other.aux1) {
      return false;
    }
    if (this->aux2 != other.aux2) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtrlInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtrlInput_

// alias to use template instance with default allocator
using CtrlInput =
  fw_msgs::msg::CtrlInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__CTRL_INPUT__STRUCT_HPP_
