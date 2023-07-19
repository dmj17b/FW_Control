// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fw_msgs:msg/StateEstEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_HPP_
#define FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fw_msgs__msg__StateEstEuler __attribute__((deprecated))
#else
# define DEPRECATED__fw_msgs__msg__StateEstEuler __declspec(deprecated)
#endif

namespace fw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateEstEuler_
{
  using Type = StateEstEuler_<ContainerAllocator>;

  explicit StateEstEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->r = 0.0f;
      this->p = 0.0f;
      this->ya = 0.0f;
      this->dx = 0.0f;
      this->dy = 0.0f;
      this->dz = 0.0f;
      this->dr = 0.0f;
      this->dp = 0.0f;
      this->dya = 0.0f;
    }
  }

  explicit StateEstEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->r = 0.0f;
      this->p = 0.0f;
      this->ya = 0.0f;
      this->dx = 0.0f;
      this->dy = 0.0f;
      this->dz = 0.0f;
      this->dr = 0.0f;
      this->dp = 0.0f;
      this->dya = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _r_type =
    float;
  _r_type r;
  using _p_type =
    float;
  _p_type p;
  using _ya_type =
    float;
  _ya_type ya;
  using _dx_type =
    float;
  _dx_type dx;
  using _dy_type =
    float;
  _dy_type dy;
  using _dz_type =
    float;
  _dz_type dz;
  using _dr_type =
    float;
  _dr_type dr;
  using _dp_type =
    float;
  _dp_type dp;
  using _dya_type =
    float;
  _dya_type dya;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__p(
    const float & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__ya(
    const float & _arg)
  {
    this->ya = _arg;
    return *this;
  }
  Type & set__dx(
    const float & _arg)
  {
    this->dx = _arg;
    return *this;
  }
  Type & set__dy(
    const float & _arg)
  {
    this->dy = _arg;
    return *this;
  }
  Type & set__dz(
    const float & _arg)
  {
    this->dz = _arg;
    return *this;
  }
  Type & set__dr(
    const float & _arg)
  {
    this->dr = _arg;
    return *this;
  }
  Type & set__dp(
    const float & _arg)
  {
    this->dp = _arg;
    return *this;
  }
  Type & set__dya(
    const float & _arg)
  {
    this->dya = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fw_msgs::msg::StateEstEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const fw_msgs::msg::StateEstEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::StateEstEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::StateEstEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fw_msgs__msg__StateEstEuler
    std::shared_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fw_msgs__msg__StateEstEuler
    std::shared_ptr<fw_msgs::msg::StateEstEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateEstEuler_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->ya != other.ya) {
      return false;
    }
    if (this->dx != other.dx) {
      return false;
    }
    if (this->dy != other.dy) {
      return false;
    }
    if (this->dz != other.dz) {
      return false;
    }
    if (this->dr != other.dr) {
      return false;
    }
    if (this->dp != other.dp) {
      return false;
    }
    if (this->dya != other.dya) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateEstEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateEstEuler_

// alias to use template instance with default allocator
using StateEstEuler =
  fw_msgs::msg::StateEstEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_EULER__STRUCT_HPP_
