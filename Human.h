#ifndef HUMAN_H
#define HUMAN_H
#include<string>
#include <iostream>
#include "Player.h"

using namespace std;

class Human : public Player
{
public:
    Human();
    char makeMove();
    string getName();

private:
    string hname;
};

#endif