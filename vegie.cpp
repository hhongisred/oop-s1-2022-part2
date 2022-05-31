#include "vegie.h"
#include<string>

int vegie::nextID = 100;

vegie::vegie()
{
    animalID = nextID;
    nextID ++;
    favourite_food="grass";
    name = "Safe:";
}

vegie::vegie(std::string n,int v)
{
    name = n;
    volume = v;
}
std::string vegie::get_name()
{
    return name;
}
int vegie::set_id()
{
    animalID = nextID;
}
int vegie::get_id()
{
    return animalID;
}