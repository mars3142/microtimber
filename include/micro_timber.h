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
#include "tree.h"

/**
 * MicroTimber is a logging library that provides a simple interface for logging messages.
 *
 * It is designed to be easy to use and to provide a consistent interface across different logging methods.
 */
class MicroTimber {
 public:
    /**
     * Add a logger.
     *
     * This method should be called before any other Timber methods.
     *
     * @param tree Logger.
     */
    static void plant(Tree* tree);

    /**
     * Add a tag for the next log messages.
     *
     * @param tag Tag.
     */
    static void tag(const char* tag);

    /**
     * Log a debug message.
     *
     * @param message Message.
     */
    static void d(const char* message);

    /**
     * Log an info message.
     *
     * @param message Message.
     */
    static void i(const char* message);

    /**
     * Log a warning message.
     *
     * @param message Message.
     */
    static void w(const char* message);

    /**
     * Log an error message.
     *
     * @param message Message.
     */
    static void e(const char* message);

    /**
     * Log a verbose message.
     *
     * @param message Message.
     */
    static void v(const char* message);
};
