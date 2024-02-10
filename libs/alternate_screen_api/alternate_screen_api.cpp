#include <iostream>
#include <ncurses.h>

#include "alternate_screen_api.hpp"

void alternate_screen_api::say_hello_world() {
    // The following sequence of commands was taken from an ncurses
    // tutorial.
    initscr();
    printw("This is a test for the alternate screen api!");
    refresh();
    getch();
    endwin();
}
