#include "cdplayer.h"

CdPlayer::CdPlayer(string description, Amplifier *amplifier)
{
    this->description = description;
    this->amplifier = amplifier;
}

void CdPlayer::on() {
    cout << description.c_str() << " on" << endl;
}

void CdPlayer::off() {
    cout << description.c_str() << " off" << endl;
}

void CdPlayer::eject() {
    title = nullptr;
    cout << description.c_str() << " eject" << endl;
}

void CdPlayer::play(string title) {
    this->title = title;
    currentTrack = 0;
    cout << description.c_str() << " playing \"" << title.c_str() << "\"" << endl;
}

void CdPlayer::play(int track) {
    if (title.empty()) {
        cout << description.c_str() <<  "can't play track " << currentTrack << ", no cd inserted" << endl;
    }
    else {
        currentTrack = track;
        cout << description.c_str() << " playing track " << currentTrack << endl;
    }
}

void CdPlayer::stop() {
    currentTrack = 0;
    cout << description.c_str() << " stopped" << endl;
}

void CdPlayer::pause() {
    cout << description.c_str() << " paused \"" << title.c_str() << "\"" << endl;
}

string CdPlayer::toString() {
    return description;
}
