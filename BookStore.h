#include<string>
#ifndef BS_H
#define BS_H
using namespace std;

class BookStore
{
public:
    
    string name;                // the book store name
    string address;             // the book store address
    int numBook;                // the inventory in the store; takes only non-negative values

    BookStore();
    BookStore(string n, string a, int b);   // creates a BookStore name n, address a, and number of books in the store b
    string set_name(string n);
    string get_name();
    string set_address(string a);
    string get_address();
    void set_numBook(int b); 
    int get_numBook();
    virtual float get_onlineTax() = 0;

};

#endif