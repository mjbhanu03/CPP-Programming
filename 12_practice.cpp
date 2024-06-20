// he absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
#include <iostream>
int main()
{
    int number;

    std::cout << "Please enter number:" << std::endl;
    std::cin >> number;

    int output = number > 51 ? (number -51) * 3 : 51 - number ;

    std::cout << output; 

}