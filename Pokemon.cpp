#include "Pokemon.h"
#include <iostream> 
using namespace std;

class Pokemon //Identify the common attribute HP & escape //redefinition of class Pokemon
{
    int HP = 200;  //HP stands for the Life bar
    virtual~Pokemon(){}


    void escape()  //Pokemon can out of the fight if player think he can not defear opponent.
    {
        cout<<"You ran away from the fight!"<<endl; 
    };

};