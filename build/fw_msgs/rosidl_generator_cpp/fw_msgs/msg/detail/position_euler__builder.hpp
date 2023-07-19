// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fw_msgs:msg/PositionEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__POSITION_EULER__BUILDER_HPP_
#define FW_MSGS__MSG__DETAIL__POSITION_EULER__BUILDER_HPP_

#include "fw_msgs/msg/detail/position_euler__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fw_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionEuler_yaw
{
public:
  explicit Init_PositionEuler_yaw(::fw_msgs::msg::PositionEuler & msg)
  : msg_(msg)
  {}
  ::fw_msgs::msg::PositionEuler yaw(::fw_msgs::msg::PositionEuler::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

class Init_PositionEuler_pitch
{
public:
  explicit Init_PositionEuler_pitch(::fw_msgs::msg::PositionEuler & msg)
  : msg_(msg)
  {}
  Init_PositionEuler_yaw pitch(::fw_msgs::msg::PositionEuler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PositionEuler_yaw(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

class Init_PositionEuler_roll
{
public:
  explicit Init_PositionEuler_roll(::fw_msgs::msg::PositionEuler & msg)
  : msg_(msg)
  {}
  Init_PositionEuler_pitch roll(::fw_msgs::msg::PositionEuler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_PositionEuler_pitch(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

class Init_PositionEuler_z_trans
{
public:
  explicit Init_PositionEuler_z_trans(::fw_msgs::msg::PositionEuler & msg)
  : msg_(msg)
  {}
  Init_PositionEuler_roll z_trans(::fw_msgs::msg::PositionEuler::_z_trans_type arg)
  {
    msg_.z_trans = std::move(arg);
    return Init_PositionEuler_roll(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

class Init_PositionEuler_y_trans
{
public:
  explicit Init_PositionEuler_y_trans(::fw_msgs::msg::PositionEuler & msg)
  : msg_(msg)
  {}
  Init_PositionEuler_z_trans y_trans(::fw_msgs::msg::PositionEuler::_y_trans_type arg)
  {
    msg_.y_trans = std::move(arg);
    return Init_PositionEuler_z_trans(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

class Init_PositionEuler_x_trans
{
public:
  Init_PositionEuler_x_trans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionEuler_y_trans x_trans(::fw_msgs::msg::PositionEuler::_x_trans_type arg)
  {
    msg_.x_trans = std::move(arg);
    return Init_PositionEuler_y_trans(msg_);
  }

private:
  ::fw_msgs::msg::PositionEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fw_msgs::msg::PositionEuler>()
{
  return fw_msgs::msg::builder::Init_PositionEuler_x_trans();
}

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__POSITION_EULER__BUILDER_HPP_
