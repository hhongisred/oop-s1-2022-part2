#include <iostream>
#include "string"
#include "Pokemon.h"
#include "Enemy.h"
#include "Player.h"
using namespace std;

Player(int enemychoice) 
{ 
    if (enemychoice==1) 
    {   
        playerClass = "Rattata";   
        HP= 200;
    }
    
    if(enemychoice == 2)
    {
        playerClass = "Spearow";
        HP=200;
    }
    
    if (enemychoice ==3)
    {
        playerClass = "Sandshrew"; 
        HP=200
    }
    
};

class Rattata : public Pokemon
{
    string type = "Normal";
    void attack() override{};
    void tackle; //damage 40 NORMAL 
    {
        attack = 40;
    }
    void double_edge; //damage 120 HP -50 NORMAL
    {
        attack = 40;
        HP -= 50;
    }
    void bite; // damage 60 EVIL
    {
        attack = 60;
    }
    void run;     //may remove this later because its the same as escape.
}


class Spearow : public Pokemon
{
    string type = "Fly";
    void attack() override{};
    void peck; //damage 35 FLY
    {
        attack = 35;
    }
    void aerial_ace; //damage 60 FLY
    {
        attack = 60;
    }
    void roost; //Restores half of your health FLY
    {
        HP += 0.5*HP
    }
    void run;
}

class Sandshrew : public Pokemon
{

    string type = "Ground";
    void attack() overide{};
    void bulldoze; //damage 60 GROUND
    {
        if(type = "Fire")
        {
            attack = 60*2;
        }
        else if(type = "Grass")
        {
            attack = 60/2;
        }
        else
        {
            attack = 60;
        }
    }
    void earthquake; //damage 100 GROUND  
    {
        if(type = "Fire")
        {
            attack = 100*2;
        }
        else if(type = "Grass")
        {
            attack = 100/2;
        }
        else
        {
            attack = 100;
        }
    }
    void slash; //damage 70 NORMAL
    {
        attack = 70;
    }
    void run;
}
};
