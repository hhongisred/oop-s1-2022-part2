#include<iostream>
#include<string>
#include"BarnesNoble.h"
using namespace std;

int main()
{
    BarnesNoble store("BarnesNoble store");
    cout<<store.get_name()<<endl;
    cout<<store.get_isOnline()<<endl;
    cout<<store.get_numSoldBooks()<<endl;
    store.soldBook();
    cout<<store.get_numSoldBooks()<<endl;
    
}