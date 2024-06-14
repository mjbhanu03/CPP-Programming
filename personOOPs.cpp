#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string name;
        int age;
        string country;

    public:
        void setInfo(string n, int a, string c)
        {
            name = n;
            age = a;
            country = c;
        }
        void getInfo()
        {
            cout << "Name: " << name << "\n";  
            cout << "Age: " << age << "\n";  
            cout << "Country: " << country << "\n";  
        }

};

int main()
{
    Person p1;
    string name;
    int age;
    string country;

    cout << "Please Enter This Details:\n";
    cout << "Name:\n";
    getline(cin, name);
    cout << "Age:\n";
    cin >> age;
    cout << "Country:\n";
    cin >> country;

    p1.setInfo(name, age, country);
    p1.getInfo();
}
