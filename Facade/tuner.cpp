#include "tuner.h"

Tuner::Tuner(string description, Amplifier *amplifier)
{
    this->description = description;
}

void Tuner::on() {
    cout << description.c_str() << " on" << endl;
}

void Tuner::off() {
    cout << description.c_str() << " off" << endl;
}

void Tuner::setFrequency(double frequency) {
    cout << description.c_str() << " setting frequency to " << frequency << endl;
    this->frequency = frequency;
}

void Tuner::setAm() {
    cout << description.c_str() << " setting AM mode" << endl;
}

void Tuner::setFm() {
    cout << description.c_str() << " setting FM mode" <<endl;
}

string Tuner::toString() {
    return description;
}
