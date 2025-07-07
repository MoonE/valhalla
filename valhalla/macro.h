#pragma once

#include <stdexcept>

#define CHECK_THROWS(condition, message)                                                             \
  {                                                                                                  \
    if (!(condition))                                                                                \
      throw std::invalid_argument(message);                                                          \
  }
