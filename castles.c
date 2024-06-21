// *************************************************************************
// CASTLES & PATHWAYS
// RECENT VERSION: v13.0.0-beta, UPDATED 21 JUN 2024 (FRIDAY)
// Copyright (C) 2020 - 2024
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
// *************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CASTLES_VERSION "13.0.0-beta"
#define CASTLES_UPDATED "21 Jun 2024 (09:05 / 9:05AM)"
#define CASTLES_LICENSE "GNU General Public License (Version 3)"

char* strappend(char* text, char* symbol) {
    char* appendednl = malloc(strlen(text) + 2); strcpy(appendednl, text); strcat(appendednl, symbol);
    return appendednl;
}

void println(char* text) {
    printf(strappend(text, "\n"));
}

void fprintln(char* text) {
    printf(text);
}

char* insertln(char* prompt) {
    char* insert;

    println(strappend(prompt, " "));
    scanf(insert);
    fprintln("\n");
    return insert;
}

char* finsertln(char* prompt) {
    char* insert;

    scanf(insert);
    return insert;
}

void version() {
    char* vstr = "CASTLES & PATHWAYS, v13.0.0-beta";
    println(vstr);
    println("Copyright (C) 2020 - 2024 Ben Daws");
    fprintln("\n"); // seperator
    println("This program comes with ABSOLUTELY NO WARRANTY;");
    println("This is free software, and you are welcome to redistribute it");
    println("under certain conditions.");
}

// currently working on a complete rewrite (v13)

int main(int argc, char* argv[]) {
    if (argc > 2) {
        println("error: invalid # of args (only 1 argument, or none)");
        return 1;
    }

    if (strcmp(argv[1], "--version") == 0) {
        version();
        return 0;
    }
}