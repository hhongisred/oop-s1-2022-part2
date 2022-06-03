#include<string>
#include"Dymocks.h"
using namespace std;

int Dymocks::nextNumStores = 0;

Dymocks:: Dymocks(){}

Dymocks:: Dymocks(bool o)
{
    isOnline = o;
    storeID = nextNumStores;
    name = "Dymocks";
    numBook = 1000;
    address = "";
}

int Dymocks::  set_nextNumStores(int nextNumStores)
{
    nextNumStores = nextNumStores;
}

int Dymocks:: get_nextNumStores()
{
    return nextNumStores;
}
bool Dymocks:: set_isOnline(bool isOnline)
{
    isOnline=isOnline;
}
bool Dymocks:: get_isOnline()
{
    return isOnline;
}
int Dymocks:: set_storeID(int storeID)
{
    storeID = storeID;
}
int Dymocks:: get_storeID()
{
    return storeID;
}
float Dymocks:: get_onlineTax()
{
    if(isOnline = true)
    {
        return 500;
    }
    else
    {
        return 0;
    }
    return 0;
}