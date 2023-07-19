// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fw_msgs:msg/PositionEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_HPP_
#define FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fw_msgs__msg__PositionEuler __attribute__((deprecated))
#else
# define DEPRECATED__fw_msgs__msg__PositionEuler __declspec(deprecated)
#endif

namespace fw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionEuler_
{
  using Type = PositionEuler_<ContainerAllocator>;

  explicit PositionEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_trans = 0.0f;
      this->y_trans = 0.0f;
      this->z_trans = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit PositionEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_trans = 0.0f;
      this->y_trans = 0.0f;
      this->z_trans = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _x_trans_type =
    float;
  _x_trans_type x_trans;
  using _y_trans_type =
    float;
  _y_trans_type y_trans;
  using _z_trans_type =
    float;
  _z_trans_type z_trans;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x_trans(
    const float & _arg)
  {
    this->x_trans = _arg;
    return *this;
  }
  Type & set__y_trans(
    const float & _arg)
  {
    this->y_trans = _arg;
    return *this;
  }
  Type & set__z_trans(
    const float & _arg)
  {
    this->z_trans = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fw_msgs::msg::PositionEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const fw_msgs::msg::PositionEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::PositionEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::PositionEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fw_msgs__msg__PositionEuler
    std::shared_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fw_msgs__msg__PositionEuler
    std::shared_ptr<fw_msgs::msg::PositionEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionEuler_ & other) const
  {
    if (this->x_trans != other.x_trans) {
      return false;
    }
    if (this->y_trans != other.y_trans) {
      return false;
    }
    if (this->z_trans != other.z_trans) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionEuler_

// alias to use template instance with default allocator
using PositionEuler =
  fw_msgs::msg::PositionEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__POSITION_EULER__STRUCT_HPP_
