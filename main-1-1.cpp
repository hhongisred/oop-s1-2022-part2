#include<string>
#include<iostream>


int add(int lhs, int rhs) 
{
    return lhs + rhs;
}


int main()
{
    int result = add(1, 2);
    std::cout << result << std::endl;
    std::cout << "Result: " << add(1, 2) << " Expected: 3" << std::endl;

    if (add(1, 2) == 3) {
    std::cout << "Test passed!" << std::endl;}

    if (add(1, 2) != 3) {
    std::cout << "Test 1 failed!" << std::endl;}

    if (add(5, 10) != 15) {
    std::cout << "Test 1 failed!" << std::endl;}

    if (add(7, 4) != 11) {
    std::cout << "Test 2 failed!" << std::endl;}

    if (add(-4, -5) != -9) {
    std::cout << "Test 3 failed!" << std::endl;}
    

}