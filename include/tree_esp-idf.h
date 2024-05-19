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
 * Logger for the default ESP32 logging mechanismus.
 *
 * This class should be planted with Timber::plant() to use it.
 */
class TreeESPIDF : public Tree {
 public:
    /**
     * Log a debug message.
     *
     * @param message Message.
     */
    void d(const char* message) override;

    /**
     * Log an info message.
     *
     * @param message Message.
     */
    void i(const char* message) override;

    /**
     * Log a warning message.
     *
     * @param message Message.
     */
    void w(const char* message) override;

    /**
     * Log an error message.
     *
     * @param message Message.
     */
    void e(const char* message) override;

    /**
     * Log a verbose message.
     *
     * @param message Message.
     */
    void v(const char* message) override;
};
