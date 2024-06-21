//fibonacci with recursion

#include <iostream>

using namespace std;

int fibonacci(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }

    return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
    int num;
    cout << "Enter Number For Fibonnaci:" << endl;
    cin >> num;

    int fib_num = fibonacci(num);

    cout << "Your Fibonacci Number:\n" << fib_num << endl; 
    return 0;
}