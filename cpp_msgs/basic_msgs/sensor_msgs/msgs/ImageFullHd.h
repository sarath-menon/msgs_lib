#pragma once
#include "std_msgs/msgs/Header.h"

namespace msgs {

constexpr static int fullhd_img_size = 1920 * 1080 * 3;

struct ImageFullHD {

  Header header;

  uint8_t frame[fullhd_img_size];

  // Array size = rows * columns * channels in image
};

} // namespace msgs
