#pragma once
#include "geometry_msgs/msgs/Position.h"
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct PositionCommand {

  Header header;

  Position position;
};

} // namespace msgs