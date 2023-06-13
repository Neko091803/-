#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main(){ 
    Human *h = new Human();
    Computer *c = new Computer();
    Referee *r = new Referee();
    Player* winner;
    winner = r->refGame(h, c);
    cout<<winner->getName()<< " Win!"<< endl;
    
    
    return 0;
}