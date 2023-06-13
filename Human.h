#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Player.h"

using namespace std;

class Human {
public:
    Human();
char makeMove();
string getName();

private:
    string hname;
};

#endif