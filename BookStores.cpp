#include"BookStores.h"
#include<string>

void BookStores::sort(Dymocks **store, int n) 
{
    Dymocks* temp = nullptr;
    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(store[i]->get_storeID() > store[j]->get_storeID())
            {
                temp = store[i];
                store[i] = store[j];
                store[j] = temp;
            }
        }
    }
}