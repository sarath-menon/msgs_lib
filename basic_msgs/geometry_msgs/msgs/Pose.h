#pragma once
#include "EulerAngleZYX.h"
#include "Position.h"
#include "Quaternion.h"
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct Pose {

  Header header;

  Position position;

  EulerAngleZYZ orientation_euler;

  Quaternion orientation_quat;
};

} // namespace msgs