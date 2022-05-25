#include <iostream>
#include "Pokemon.h"


class Bulbosaur: public Pokemon() //error: Class or struct definition missing Bulbosaur class that inherits from Pokemon 
{
string type ="Grass"; 
void attack overide(); //there might be problems with this 

void razor_leaf() //Razor_leaf function 
{
    if(enemy=Fire)
    { 
        attack=55/2; 
    }
    
    else if (enemy=water)
    {
        attack=55*2;
    }
    else
    {
        attack=55;
    }
};

 void headbutt //headbutt function with an attack of 70 damage
 {
     attack= 70;
     
 } 
 
 void absorb //absorb function with an attac
 {
     if(enemy=Fire)
    { 
        attack=40/2; 
    }
    
    else if (enemy=water)
    {
        attack=40*2; 
    }
    else
    {
        attack=40;
    }
    HP+=0.5*attack
 }
 void run() // function that facilitates the players escape from battle 
 {
     escape;   
 } //end battle
};