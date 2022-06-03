#include"BookStore.h"
#include<string>
using namespace std;

BookStore:: BookStore(){};

BookStore::BookStore(string n, string a, int b)
{
    name = n;
    address = a;
    numBook = b;
}  
string BookStore:: set_name(string n)
{
    name = n;
}
string BookStore::get_name()
{
    return name;
}
string BookStore:: set_address(string a)
{
    address = a;
}
string BookStore::get_address()
{
    return address;
}
void BookStore:: set_numBook(int b)
{
    numBook = b;
}
int BookStore::get_numBook()
{
    return numBook;
}
