#include "amplifier.h"


Amplifier::Amplifier(string description)
{
    this->description = description;
}

void Amplifier::on() {
    cout << description.c_str() << " on" << endl;
}

void Amplifier::off() {
    cout << description.c_str() << " off" << endl;
}

void Amplifier::setStereoSound() {
    cout << description.c_str() << " stereo mode on" << endl;
}

void Amplifier::setSurroundSound() {
    cout << description.c_str() << " surround sound on (5 speakers, 1 subwoofer)" << endl;
}

void Amplifier::setVolume(int level) {
    cout << description.c_str() << " setting volume to " << level << endl;
}

void Amplifier::setTuner(Tuner *tuner) {
    cout << description.c_str() << " setting tuner to " << dvd << endl;
    this->tuner = tuner;
}

void Amplifier::setDvd(DvdPlayer *dvd) {
    cout << description.c_str() << " setting DVD player to " << dvd << endl;
    this->dvd = dvd;
}

void Amplifier::setCd(CdPlayer *cd) {
    cout << description.c_str() << " setting CD player to " << cd << endl;
    this->cd = cd;
}

string Amplifier::toString() {
    return description;
}
