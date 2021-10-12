#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct ThrustTorqueCommand {

  Header header;

  float thrust;
  float roll_torque;
  float pitch_torque;
  float yaw_torque;
};

} // namespace msgs