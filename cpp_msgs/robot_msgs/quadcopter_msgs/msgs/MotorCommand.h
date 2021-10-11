#pragma once
#include "actuator_msgs/msgs/MotorSpeed.h"
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct MotorCommand {

  Header header;

  MotorSpeed speed[4];
};

} // namespace msgs