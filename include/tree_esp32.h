#pragma once
#include "tree.h"

class TreeESP32 : public Tree {
 public:
  void log(const TimberLogLevel logLevel, const char* message) override;
};
