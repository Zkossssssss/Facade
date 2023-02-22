#include "theaterlights.h"

TheaterLights::TheaterLights(string description)
{
    this->description = description;
}

void TheaterLights::on() {
    cout << description.c_str() << " on" << endl;
}

void TheaterLights::off() {
    cout << description.c_str() << " off" << endl;
}

void TheaterLights::dim(int level) {
    cout << description.c_str() << " dimming to " << level  << "%" << endl;
}

string TheaterLights::toString() {
    return description;
}
