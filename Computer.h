#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Player.h"
#include<string>

using namespace std;

class Computer : public Player {
public:
    Computer();
    char makeMove();
    string getName();

private:
    string cname;
};

#endif