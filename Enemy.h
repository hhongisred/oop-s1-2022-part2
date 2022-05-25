#include <iostream>
#include "string"
#include "Pokemon.h"
using namespace std;

//Identify the enemy pokemon to fight with player's pokemon.

class Rattata : public Pokemon 
{
public:

void attack() override;
{                           
    void tackle; //damage 40 NORMAL 
    void double_edge; //damage 120 HP -50 NORMAL
    void bite; // damage 60 EVIL
    void run;    . 
}
};

class Spearow : public Pokemon
{
public:
void attack() override;
{                     
    void peck; //damage 35 FLY
    void aerial_ace; //damage 60 FLY
    void roost; //Restores half of your health FLY
    void run;
}
};

class Sandshrew : public Pokemon
{
public:
void attack() override;
{                      
    void bulldoze; //damage 60 GROUND 
    void earthquake; //function does damage 100
    void slash; //damage 70 NORMAL
    void run;
}
};