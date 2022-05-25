#include "Pokemon.h"
class Squirtle: public Pokemon  
{
    
public: // add inherited data members from pokomon 

void attack() override  
{
    //add unique Bulbosaur attack method
    void water_gun(); //Damage 40 WATER
    void surf(); // Damage 90 ICE
    void body_slam(); // Damage 85 NORMAL
    void run();
}
};