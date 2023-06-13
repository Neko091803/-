#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include<string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"


class Referee : public Player {
    public:
    Referee( ); 
    Player * refGame(Player * player1, Player * player2);

};

#endif