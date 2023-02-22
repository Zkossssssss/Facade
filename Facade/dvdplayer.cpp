#include "dvdplayer.h"

DvdPlayer::DvdPlayer(string description, Amplifier *amplifier)
{
    this->description = description;
    this->amplifier = amplifier;
}

void DvdPlayer::on() {
    cout << description.c_str() << " on" << endl;
}

void DvdPlayer::off() {
    cout << description.c_str() << " off" << endl;
}

void DvdPlayer::eject() {
    movie = "";
    cout << description.c_str() << " eject" << endl;
}

void DvdPlayer::play(string movie) {
    this->movie = movie;
    currentTrack = 0;
    cout << description.c_str() << " playing \"" << movie.c_str() << "\"" << endl;
}

void DvdPlayer::play(int track) {
    if (movie.empty()) {
        cout << description.c_str() << " can't play track " + track << " no dvd inserted" << endl;
    }
    else {
        currentTrack = track;
        movie = " of \"" + movie;
        cout << description.c_str() << " playing track " + currentTrack << movie.c_str() << "\"" << endl;
    }
}

void DvdPlayer::stop() {
    string temp = " stopped \"" + movie;
    currentTrack = 0;
    cout << description.c_str() << temp.c_str() << "\"" << endl;
}

void DvdPlayer::pause() {
    string temp = " paused \"" + movie;
    cout << description.c_str() << temp.c_str() << "\"" << endl;
}

void DvdPlayer::setTwoChannelAudio() {
    cout << description.c_str() << " set two channel audio" << endl;
}

void DvdPlayer::setSurroundAudio() {
    cout << description.c_str() << " set surround audio" << endl;
}

string DvdPlayer::toString() {
    return description;
}
