#include "popcornpopper.h"

PopcornPopper::PopcornPopper(string description)
{
    this->description = description;
}

void PopcornPopper::on() {
    cout << description.c_str() << " on" << endl;
}

void PopcornPopper::off() {
    cout << description.c_str() << " off" << endl;
}

void PopcornPopper::pop() {
    cout << description.c_str() << " popping popcorn!" << endl;
}

string PopcornPopper::toString() {
    return description;
}
