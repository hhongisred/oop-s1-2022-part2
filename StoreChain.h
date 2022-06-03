#include<string>
#include"BarnesNoble.h"
#ifndef SC_H
#define SC_H

class StoreChain:public BarnesNoble
{
public:
    StoreChain();
    BookStore **BookStores;                          
    BookStore **get_bookStores();
};
#endif