// Inheritance with the help of Car example

#include <iostream>
#include <string>

using namespace std;

class Car
{
    protected:
        string model;
        int year;
        string bodyStyle; 
        int tyre;

};

class Honda : Car 
{
    private:
        int price;
        int doors;
        int mileage;

    public:
        void setData(string car_model, int car_year, string car_bodyStyle, int car_tyre, int honda_price, int honda_doors, int honda_mileage)
        {
            model = car_model;
            year = car_year;
            bodyStyle = car_bodyStyle;
            tyre = car_tyre;
            price = honda_price;
            doors = honda_doors;
            mileage = honda_mileage;
        }  
        void getData()
        {
            cout << "Here Your Car Details Are:" << endl;
            cout << "Model:" << model << endl;
            cout << "Year:" << year << endl;
            cout << "Body Style:" << bodyStyle << endl;
            cout << "Tyres:" << tyre << endl;
            cout << "Price:" << price << endl;
            cout << "Doors:" << doors << endl;
            cout << "Mileage:" << mileage << endl;
        }  
};

int main()
{
    Honda car1;
    string car_model;
    int car_year;
    string car_bodyStyle;
    int car_tyre;
    int honda_price;
    int honda_doors; 
    int honda_mileage;

    cout << "Please Enter Car Details:" << endl;
    cout << "Model:" << endl;
    getline(cin, car_model); 
    cout << "Year:" << endl;
    cin >> car_year; 
    cin.ignore();
    cout << "Body Style:" << endl;
    getline(cin, car_bodyStyle); 
    cout << "Tyres:" << endl;
    cin >> car_tyre; 
    cout << "Price:" << endl;
    cin >> honda_price; 
    cout << "Doors:" << endl;
    cin >> honda_doors; 
    cout << "Mileage:" << endl;
    cin >> honda_mileage; 

    car1.setData(
                car_model,
                car_year,
                car_bodyStyle,
                car_tyre,
                honda_price,
                honda_doors,
                honda_mileage
);

car1.getData();
return 0;
}