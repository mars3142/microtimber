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

#include <vector>

static std::vector<Tree*> m_trees;

void MicroTimber::tag(const char* tag) {
    for (auto tree : m_trees) {
        tree->tag(tag);
    }
}

void MicroTimber::plant(Tree* tree) { m_trees.push_back(tree); }

void MicroTimber::d(const char* message) {
    for (auto tree : m_trees) {
        tree->d(message);
    }
}

void MicroTimber::i(const char* message) {
    for (auto tree : m_trees) {
        tree->i(message);
    }
}

void MicroTimber::w(const char* message) {
    for (auto tree : m_trees) {
        tree->w(message);
    }
}

void MicroTimber::e(const char* message) {
    for (auto tree : m_trees) {
        tree->e(message);
    }
}

void MicroTimber::v(const char* message) {
    for (auto tree : m_trees) {
        tree->v(message);
    }
}
