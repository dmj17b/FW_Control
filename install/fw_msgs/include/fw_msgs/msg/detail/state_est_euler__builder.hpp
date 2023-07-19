// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fw_msgs:msg/StateEstEuler.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_EULER__BUILDER_HPP_
#define FW_MSGS__MSG__DETAIL__STATE_EST_EULER__BUILDER_HPP_

#include "fw_msgs/msg/detail/state_est_euler__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fw_msgs
{

namespace msg
{

namespace builder
{

class Init_StateEstEuler_dya
{
public:
  explicit Init_StateEstEuler_dya(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  ::fw_msgs::msg::StateEstEuler dya(::fw_msgs::msg::StateEstEuler::_dya_type arg)
  {
    msg_.dya = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_dp
{
public:
  explicit Init_StateEstEuler_dp(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dya dp(::fw_msgs::msg::StateEstEuler::_dp_type arg)
  {
    msg_.dp = std::move(arg);
    return Init_StateEstEuler_dya(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_dr
{
public:
  explicit Init_StateEstEuler_dr(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dp dr(::fw_msgs::msg::StateEstEuler::_dr_type arg)
  {
    msg_.dr = std::move(arg);
    return Init_StateEstEuler_dp(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_dz
{
public:
  explicit Init_StateEstEuler_dz(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dr dz(::fw_msgs::msg::StateEstEuler::_dz_type arg)
  {
    msg_.dz = std::move(arg);
    return Init_StateEstEuler_dr(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_dy
{
public:
  explicit Init_StateEstEuler_dy(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dz dy(::fw_msgs::msg::StateEstEuler::_dy_type arg)
  {
    msg_.dy = std::move(arg);
    return Init_StateEstEuler_dz(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_dx
{
public:
  explicit Init_StateEstEuler_dx(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dy dx(::fw_msgs::msg::StateEstEuler::_dx_type arg)
  {
    msg_.dx = std::move(arg);
    return Init_StateEstEuler_dy(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_ya
{
public:
  explicit Init_StateEstEuler_ya(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_dx ya(::fw_msgs::msg::StateEstEuler::_ya_type arg)
  {
    msg_.ya = std::move(arg);
    return Init_StateEstEuler_dx(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_p
{
public:
  explicit Init_StateEstEuler_p(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_ya p(::fw_msgs::msg::StateEstEuler::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_StateEstEuler_ya(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_r
{
public:
  explicit Init_StateEstEuler_r(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_p r(::fw_msgs::msg::StateEstEuler::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_StateEstEuler_p(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_z
{
public:
  explicit Init_StateEstEuler_z(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_r z(::fw_msgs::msg::StateEstEuler::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_StateEstEuler_r(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_y
{
public:
  explicit Init_StateEstEuler_y(::fw_msgs::msg::StateEstEuler & msg)
  : msg_(msg)
  {}
  Init_StateEstEuler_z y(::fw_msgs::msg::StateEstEuler::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_StateEstEuler_z(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

class Init_StateEstEuler_x
{
public:
  Init_StateEstEuler_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateEstEuler_y x(::fw_msgs::msg::StateEstEuler::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_StateEstEuler_y(msg_);
  }

private:
  ::fw_msgs::msg::StateEstEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fw_msgs::msg::StateEstEuler>()
{
  return fw_msgs::msg::builder::Init_StateEstEuler_x();
}

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_EULER__BUILDER_HPP_
