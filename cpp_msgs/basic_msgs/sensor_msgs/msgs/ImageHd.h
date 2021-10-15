#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct ImageHD {

  Header header;

  uint8_t frame[1080 * 720 * 3];

  // Array size = rows * columns * channels in image
};

} // namespace msgs
