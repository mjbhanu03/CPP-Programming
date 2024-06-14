#include <iostream>
#include <string>
using namespace std;

class myClass{

    public: 
        string name;
        string gmail;
        int age;
        myClass(string n, string g, int a)
        {
            name = n;
            gmail = g;
            age = a;
        }


};


int main()
{
    myClass p1("Jay", "jaymange263@gmail.com", 21);
    myClass p2("Manish", "mohanmange2@gmail.com", 40);

    cout << "Name: "<< p1.name << "Gmail: " << p1.gmail << "Age: " << p1.age << "\n"; 
    cout << "Name: "<< p2.name << "Gmail: " << p2.gmail << "Age: " << p2.age ; 
    
    return 0;

}