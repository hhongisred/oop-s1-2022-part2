#ifndef VEGIE_H
#define VEGIE_H
#include<string>
#include "animal.h"

class vegie :public animal
{
private:
    std::string favourite_food;
    static int nextID;
public:
    vegie();
    vegie(std::string n,int v); 
    std::string get_name();
    int set_id();
    int get_id();
};
#endif