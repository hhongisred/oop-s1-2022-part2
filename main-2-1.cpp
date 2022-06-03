#include <iostream>
#include <string>
#include"Dymocks.h"
using namespace std;

int main()
{
    Dymocks online(true);
    online.set_name("online");
    cout<<online.get_name()<<endl;
    cout<<online.get_isOnline()<<endl;
    cout<<online.get_numBook()<<endl;
    cout<<online.get_onlineTax()<<endl;
}