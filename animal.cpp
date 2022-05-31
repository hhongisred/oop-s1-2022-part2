#include "animal.h"
#include<string>

animal::animal()
{
    std::string name ;            
    int animalID ;       
    int volume ;
};

animal::animal(std::string n, int v)
{
    name = n;
    volume = v;
}


std::string animal:: set_name(std::string n)
{
    name = n;
};

int animal::set_volume(int v)
{
    volume = v;
};
int animal::get_volume()
{
    return volume;
};