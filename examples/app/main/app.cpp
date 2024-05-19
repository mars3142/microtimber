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
#include "tree_esp-idf.h"

extern "C" void app_main(void) {
    MicroTimber::plant(new TreeESPIDF());

    MicroTimber::d("This is a debug message.");
    MicroTimber::i("This is an info message.");
    MicroTimber::tag("custom-tag");
    MicroTimber::w("This is a warning message.");
    MicroTimber::e("This is an error message.");
    MicroTimber::v("This is a verbose message.");
}
