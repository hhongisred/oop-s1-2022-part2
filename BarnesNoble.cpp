#include<string>
#include"BarnesNoble.h"
using namespace std;

BarnesNoble::BarnesNoble(){}

BarnesNoble::BarnesNoble(string n)
{
    name = n;
    numSoldBooks = 0;
}

void BarnesNoble::soldBook()
{
    numSoldBooks++;
}
int BarnesNoble::get_numSoldBooks()
{
    return numSoldBooks;
}