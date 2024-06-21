//this will add elements of the container with the help of container 

#include <iostream>

using namespace std;
int addValue(int size, int arr[])
{
    if(size == 0)
        return 0;

    return arr[size - 1] + addValue(size - 1, arr);
}

int main()
{
    int arr[] = {1, 5, 9, 7, 6, 3};
    int size = 6;

    cout << "Array Elements Are:" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";

    int sum = addValue(size, arr);

    cout << "Your Total Value:\n" << sum << endl;
}