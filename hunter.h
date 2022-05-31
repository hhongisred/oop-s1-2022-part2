#ifndef HUNTER_H
#define HUNTER_H
#include<string>
#include "animal.h"

class hunter:public animal
{
private:
    int kills;
    static int nextID;


public:
    hunter();
    hunter(std::string n, int v);  // create a hunter with name n and body volume v
    std::string get_name();
    int set_id();
    int get_id();
};
#endif