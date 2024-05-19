#pragma once

#include <string>
#include "timber_log_level.h"

class Tree {
 public:
  void tag(const char* tag);
  virtual void log(const TimberLogLevel logLevel, const char* message) = 0;

 protected:
  std::string m_tag = "app";
};
