#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct AttitudeCommand {

  Header header;

  float roll;
  float pitch;
  float yaw;
};

} // namespace msgs