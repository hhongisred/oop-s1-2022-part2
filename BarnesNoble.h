#include<string>
#ifndef BN_H
#define BN_H
#include "Dymocks.h"
using namespace std;

class BarnesNoble: public Dymocks
{
public: 
    int numSoldBooks; 

    BarnesNoble();         // inherit from base class default constructor    
    BarnesNoble(string n);  // set name n  
                       // should call the corresponding constructor from the parent class
                       // with the online parameter being false

    void soldBook(); 
    int get_numSoldBooks(); 
    };

#endif
