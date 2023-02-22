#ifndef THEATERLIGHTS_H
#define THEATERLIGHTS_H
#include <string>
#include <iostream>

using namespace std;

class TheaterLights
{
private:
    string description;
public:
    TheaterLights(string description);
    void on();
    void off();
    void dim(int level);
    string toString();
};

#endif // THEATERLIGHTS_H
