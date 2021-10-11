#pragma once
#include "geometry_msgs/msgs/Pose.h"
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct Mocap {

  Header header;

  Pose pose;

  float latency;
};

} // namespace msgs
