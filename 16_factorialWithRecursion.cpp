// factorial with recursion

#include <iostream>

using namespace std;
int factorialFun(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorialFun(num - 1);

}
int main()
{
    int num;
    cout << "How many numbers of factorial you want?" << endl;
    cin >> num;

    int fact =  factorialFun(num);

    cout << fact;

}