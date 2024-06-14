#include <iostream>
#include <string>
using namespace std;

class employee 
{
    private:
        int salary; // private variable

    public:
        //setter
        void setSalary(int s)
        {
            salary = s;
        } 
        // getter 
        int getSalary()
        {
            return salary;
        }

};

int main()
{
    employee e1;

    e1.setSalary(140000); // set the sallary by setter 

    cout << "Salary: " << e1.getSalary() ; //printing the salary

    return 0;   
}