#include "hunter.h"
#include<string>

int hunter::nextID = 1000; //defult value

hunter::hunter()
{
    animalID = nextID;
    nextID ++;
    name = "Hunter:";
    kills = 0;
}

hunter::hunter(std::string n, int v)
{
    name = n;
    volume = v;
}
std::string hunter:: get_name()
{
    return name;
};
int hunter::set_id()
{
    animalID = nextID;
}
int hunter::get_id()
{
    return nextID;
}