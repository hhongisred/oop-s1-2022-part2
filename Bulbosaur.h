#include "Pokemon.h"

class Bulbosaur: public Pokemon
{
   
public: // add inherited data members from pokomon 

void attack() override //the main difference between each attack is the level of damage to opponents 
{
   void razor_leaf(); //razor_leaf function deals 55 damage 
   void absorb(); //absorb function deals 40 
   void headbutt(); // headbutt function deals 70 damage to the enemy pokem 
   void run();     
}
};