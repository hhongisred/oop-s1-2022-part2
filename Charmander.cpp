#include <iostream>
#include "Pokemon.h"

class Charmander: public Pokemon() // error: class or struct definition is missing charmander class 
{
    string type = "Fire";
    void attack override;  //void attack() override{};
    void ember()   
    { 
        if (enemy = GRASS)
        {
            attack() = 40*2; //invalid use of void
        }
        else if(enemy = WATER)
        {
            attack() = 40/2;
        }
        else
        {
            attack() = 40;
        }
    }; //damage 40 FIRE


    void dragon_breath() 
    {
        attack() = 60;
    } // function does damage 60 DRAGON

    void jump_kick()
    {
        attack() = 100;
    } // damage 100 NORMAL

    void run()
    {
        escape; //escape was not declared in this scope 
    } 

};