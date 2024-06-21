#  *************************************************************************
#  CASTLES & PATHWAYS
#  RECENT VERSION: v13.0.0-beta, UPDATED 21 JUN 2024 (FRIDAY)
#  Copyright (C) 2020 - 2024
#
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <https://www.gnu.org/licenses/>.
#  *************************************************************************

all:
	make castles
	make install

castles:
	gcc castles.c -o castles
	mkdir -v build
	mv -v castles build/castles

install:
	test -f build/castles && sudo cp build/castles /usr/local/bin/castles
	echo "there is no castles in the build directory, run make castles first (or make all)"