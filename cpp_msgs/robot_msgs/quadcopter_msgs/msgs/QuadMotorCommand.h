#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct QuadMotorCommand {

  Header header;

  float motorspeed[4];
};

} // namespace msgs