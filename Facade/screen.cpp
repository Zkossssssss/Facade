#include "screen.h"

Screen::Screen(string description)
{
    this->description = description;
}

void Screen::up() {
    cout << description.c_str() << " going up" << endl;
}

void Screen::down() {
    cout << description.c_str() << " going down" << endl;
}


string Screen::toString() {
    return description;
}

