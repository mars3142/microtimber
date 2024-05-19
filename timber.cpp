#include "timber.h"
#include <stdio.h>
#include "timber_log_level.h"

static std::vector<Tree*> m_tree;

void Timber::tag(const char* tag) {
  for (auto tree : m_tree) {
    tree->tag(tag);
  }
}

void Timber::plant(Tree* tree) {
  m_tree.push_back(tree);
}

void Timber::d(const char* message) {
  for (auto tree : m_tree) {
    tree->log(TimberLogLevel::DEBUG, message);
  }
}

void Timber::i(const char* message) {
  for (auto tree : m_tree) {
    tree->log(TimberLogLevel::INFO, message);
  }
}

void Timber::w(const char* message) {
  for (auto tree : m_tree) {
    tree->log(TimberLogLevel::WARNING, message);
  }
}

void Timber::e(const char* message) {
  for (auto tree : m_tree) {
    tree->log(TimberLogLevel::ERROR, message);
  }
}

void Timber::v(const char* message) {
  for (auto tree : m_tree) {
    tree->log(TimberLogLevel::VERBOSE, message);
  }
}
