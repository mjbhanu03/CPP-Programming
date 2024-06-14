#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
        void car()
        {
            cout << "I am a Basic version of car\n";
        }
};

class ExtendedCar: public Car
{
    public:
        void car()
        {
            cout << "Yes, I am a Extended car with basic version\n";
        }
};

class TopCar: public Car
{
    public:
        void car()
        {
            cout << "OH Yes, I am a Top model of the car and also i have combined features of extended and basic version\n";
        }
};

int main()
{
    Car basicCar;
    ExtendedCar extendedCar;
    TopCar topCar;

    basicCar.car();
    extendedCar.car();
    topCar.car();
}