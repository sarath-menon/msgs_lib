#pragma once
#include <string>

namespace msgs {

struct Header {

  uint64_t timestamp;
  std::string id;
};

} // namespace msgs