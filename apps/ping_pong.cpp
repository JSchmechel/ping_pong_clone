#include <iostream>

#include "alternate_screen_api.hpp"

int main() {

    // At the moment I am just toying around with ncurses.
    // The following lines call functions which try out
    // different features of the ncurses-API.

    alternate_screen_api::say_hello_world();

    return 0;

}
