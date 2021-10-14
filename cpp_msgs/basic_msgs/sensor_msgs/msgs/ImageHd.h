#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

struct ImageHD {

  Header header;

  uint8_t frame[2039040];
};

} // namespace msgs
