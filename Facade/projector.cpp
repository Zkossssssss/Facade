#include "projector.h"

Projector::Projector(string description, DvdPlayer *dvdPlayer)
{
    this->description = description;
    this->dvdPlayer = dvdPlayer;
}

void Projector::on() {
    cout << description.c_str() << " on" << endl;
}

void Projector::off() {
    cout << description.c_str() << " off" << endl;
}

void Projector::wideScreenMode() {
    cout << description.c_str() << " in widescreen mode (16x9 aspect ratio)" << endl;
}

void Projector::tvMode() {
    cout << description.c_str() << " in tv mode (4x3 aspect ratio)" << endl;
}

string Projector::toString() {
    return description;
}

