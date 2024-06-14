#include<iostream>
#include<string>

using namespace std;

class Car
{   
    private:
        string company;
        string model;
        int year;
    
    public:
    Car(string company_name, string model_name, int which_year): company(company_name), model(model_name), year(which_year){}

    void getInfo()
    {
        cout << "Car Comapny: " << company << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main()
{
    string company;
    string model;
    int year;

    cout << "Enter your car details:\n";
    cout << "Company:\n";
    getline(cin, company);
    cout << "Model:\n";
    getline(cin, model);
    cout << "Year:\n";
    cin >> year;  

    Car c1(company, model, year);  
  

    c1.getInfo();

}