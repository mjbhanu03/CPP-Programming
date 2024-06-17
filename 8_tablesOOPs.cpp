// generating tables

#include <iostream>

class Tables
{
    public:
        int i,j;
        void tables(int num[][10], int number)
        {
            for(int i=1; i<=number; i++)
            {
                for(int j=1; j<=10; j++)
                {
                    std::cout << i << " * " << j << " = " << i * j << std::endl; 
                }
                std::cout << std::endl;
            }
        }
};

int main()
{
    Tables t;
    int number;
    std::cout << "Enter how many tables you want to print(Table starts from 1 onwards):" << std::endl;
    std::cin >> number;

    int num[number][10];

    t.tables(num, number);
}