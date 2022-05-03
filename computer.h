#ifndef COMP_H
#define COMP_h
#include<string>
#include"player.h"

class Computer:Player
{

public:
    Computer();
    Computer(std::string letter);
    void move();
    std::string getMoves();
    ~Computer();

};




#endif

