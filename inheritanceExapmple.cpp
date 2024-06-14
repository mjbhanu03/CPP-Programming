#include <iostream>
#include <string>

using namespace std;

class vehicle
{
    public:
        string brand = "Ford";

        void honk()
        {
            cout << "Tuut, Tuut\n";
        }
};

class Car:public vehicle
{
    public:
        string model = "Mustang";
};

int main()
{
    Car car1;
    car1.honk(); 
    cout << car1.brand << " " << car1.model << " " ;
    return 0;
};