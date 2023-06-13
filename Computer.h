#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"

using namespace std;

class Computer {
public:
    Computer();
    char makeMove();
    string getName();

private:
    string cname;
};

#endif