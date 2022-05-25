#include <iostream>
#include "string"
using namespace std;

class Pokemon //Base abstract class 
{
public:
    virtual ~Pokemon () {} //pokemon is virtual because it cannot be create
    virtual void attack()=0;
    void escape(); //
    string type; //type of pokemon, whether its a fire type, grass or water. 

private:
    string name;
    int id;
    int HP;
};
