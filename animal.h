#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>

class animal
{
protected:
    std::string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
public:
    animal();
    animal(std::string n, int v) ;  // creates an animal with name n and body volume v.
    std::string set_name(std::string n);
    virtual std::string get_name() =0;
    int set_volume(int v);
    int get_volume();
};
#endif