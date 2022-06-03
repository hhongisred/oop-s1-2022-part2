#include<string>
#include"BookStore.h"
#ifndef DY_H
#define DY_H

class Dymocks:public BookStore
{
public:
    static int nextNumStores;
    int storeID;          // unique store ID 
    bool isOnline;

    Dymocks();            // Uses the default constructor of parent
    Dymocks(bool o);     // sets isOnline attribute with o
                        // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
    int set_nextNumStores(int nextNumStores);
    int get_nextNumStores();
    bool set_isOnline(bool isOnline);
    bool get_isOnline();
    int set_storeID(int storeID);
    int get_storeID();
    float get_onlineTax();
};
#endif