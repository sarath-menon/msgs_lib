#pragma once
#include "geometry_msgs/msgs/Position.h"
#include "std_msgs/msgs/Header.h"

namespace cpp_msg {

struct PositionCommand {

  Header header;

  Position position;
};

} // namespace cpp_msg