#include <iostream>
#include "Pokemon.h"


class Charmander: public Pokemon 
{
    
public: // add inherited data members from pokomon 

void attack() override  
{                               //error: expected unqualified-id before ‘{’ token
    //add unique Bulbosaur attack method
    void ember(); //the ember function does 40 damage 
    void dragon_breath(); // the dragon_breath function does 60 damage
    void jump_kick(); // the jump_kick function does damage 100 damage 
    void run(); //facilitates the escape of the player in battle 
}
};