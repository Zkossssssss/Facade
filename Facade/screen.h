#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>

using namespace std;

class Screen
{
private:
    string description;
public:
    Screen(string description);
    void up();
    void down();
    string toString();
};

#endif // SCREEN_H
