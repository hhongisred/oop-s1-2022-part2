#include<iostream>
#include<string>
#include"StoreChain.h"
using namespace std;

int main()
{
    StoreChain first;
    BookStore** BookStores;
    BookStores = first.get_bookStores();
        for(int i = 0; i<5;i++)
        {
            if(i==0)
        {
            cout<<BookStores[i] ->get_name()<<endl;
        }
        else if(i ==4)
        {
            cout<<BookStores[i] ->get_name()<<endl;
        }
        else if(i == 2)
        {
            cout<<BookStores[i] ->get_onlineTax()<<endl;
        }
        else
        {
            cout<<BookStores[i] ->get_onlineTax()<<endl;
        }
        }
    return 0;
}