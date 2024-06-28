// linear search
#include <iostream>

using namespace std;

int search(int arr[], int element) 
{
    for(int i = 0; i < 10; i++)
    {
        if(element == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 2, 8, 9, 56, 6, 7, 78, 20, 5};
    int element = 8;

    int check = search(arr, element);

    if(check == -1)
    {
        cout << "Not Found" ;
    }
    else 
    {
        cout << "Element is on " << check << " index.";
    }
}
