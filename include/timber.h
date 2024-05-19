#pragma once
#include <string>
#include <vector>
#include "tree.h"
#include "tree_esp32.h"

class Timber {
 public:
  static void plant(Tree* tree);
  static void tag(const char* tag);
  static void d(const char* message);
  static void i(const char* message);
  static void w(const char* message);
  static void e(const char* message);
  static void v(const char* message);
};
