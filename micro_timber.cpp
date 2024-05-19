/**
    MicroTimber is a logging library that provides a simple interface for logging messages.
    Copyright (C) 2024  Peter Siegmund

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "micro_timber.h"

#include <stdio.h>

#include <vector>

#include "timber_log_level.h"

static std::vector<Tree*> m_tree;

void MicroTimber::tag(const char* tag) {
    for (auto tree : m_tree) {
        tree->tag(tag);
    }
}

void MicroTimber::plant(Tree* tree) { m_tree.push_back(tree); }

void MicroTimber::d(const char* message) {
    for (auto tree : m_tree) {
        tree->log(TimberLogLevel::DEBUG, message);
    }
}

void MicroTimber::i(const char* message) {
    for (auto tree : m_tree) {
        tree->log(TimberLogLevel::INFO, message);
    }
}

void MicroTimber::w(const char* message) {
    for (auto tree : m_tree) {
        tree->log(TimberLogLevel::WARNING, message);
    }
}

void MicroTimber::e(const char* message) {
    for (auto tree : m_tree) {
        tree->log(TimberLogLevel::ERROR, message);
    }
}

void MicroTimber::v(const char* message) {
    for (auto tree : m_tree) {
        tree->log(TimberLogLevel::VERBOSE, message);
    }
}
