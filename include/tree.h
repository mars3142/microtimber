#pragma once
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

#include <string>

#include "timber_log_level.h"

/**
 * Interface for loggers.
 */
class Tree {
 public:
    /**
     * Add a tag for the next log messages.
     *
     * @param tag Tag.
     */
    void tag(const char *tag);

    /**
     * Log a debug message.
     *
     * @param message Message.
     */
    virtual void log(const TimberLogLevel logLevel, const char *message) = 0;

 protected:
    std::string m_tag = "app";
};
