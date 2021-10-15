#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct ImageHD {

  Header header;

  uint8_t frame[1080 * 720 * 3];
};

} // namespace msgs
