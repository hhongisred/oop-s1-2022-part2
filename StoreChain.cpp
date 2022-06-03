#include<string>
#include"StoreChain.h"
#include "BookStore.h"
using namespace std;

StoreChain::StoreChain()
{
    BookStores= new BookStore* [5];
    for(int i = 0;i<5;i++)
    {
        if(i==0)
        {
            BookStores[i] = new BarnesNoble("Springfield");
        }
        else if(i ==4)
        {
            BookStores[i] = new BarnesNoble("Centerville");
        }
        else if(i == 2)
        {
            BookStores[i] = new Dymocks(false);
        }
        else
        {
            BookStores[i] = new Dymocks(true);
        }
    }
}
BookStore ** StoreChain::get_bookStores()
{
    return BookStores;
}

