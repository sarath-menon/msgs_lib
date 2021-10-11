#pragma once
#include "actuator_msgs/msgs/MotorSpeed.h"
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct QuadMotorCommand {

  Header header;

  float motorspeed[4];
};

} // namespace msgs