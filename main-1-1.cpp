#include<string>
#include"BookStore.h"
#include<iostream>
using namespace std;

class BookStoreTest : public BookStore
{
    BookStoreTest(string n, string a, int b): BookStore(n, a, b){}
    float get_onlineTax()
    {
        return 0;
    }
};

int main()
{}