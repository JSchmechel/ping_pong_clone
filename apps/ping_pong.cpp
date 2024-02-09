#include <iostream>
#include <ncurses.h>

int main() {
    // The following sequence of commands was taken from an ncurses
    // tutorial.
    initscr();
    printw("This will become a ping-pong clone!");
    refresh();
    getch();
    endwin();

    return 0;
}
