#include "Human.h"
#include <cctype>
using namespace std;
Human::Human(){
    hname = "Human";
}
char Human::makeMove(){
    char move;
    cout<<"please enter yout move with capital letter"<<endl;
        cin >> move;
    while(islower(move)){
        if (islower(move)){
            cout<< "please enter capital letter"<<endl;
            cin >> move;
        }
        else{
            break;
        }
    }
    return move;
    }
string Human::getName(){
        return hname;
    }