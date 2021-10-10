#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct AttitudeRateCommand {

  Header header;

  float roll_rate;
  float pitch_rate;
  float yaw_rate;
};

} // namespace msgs