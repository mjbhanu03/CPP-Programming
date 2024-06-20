//Quick sort

#include <iostream>

using namespace std;

class quickSort
{
    public:
    quickSort(int arr[], int size)
    {

    cout << "Your " << size << " Elements:" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;

    int pivot = size - 1;
    int smallElement = 0;

    for(int i=0; i<size - 1 ; i++)
    {
        if(arr[i] <= arr[pivot])
        {
            swap(arr[i], arr[smallElement]);
            smallElement++;
        }
    }
    if(size - 1 != smallElement)
    {
        swap(arr[pivot], arr[smallElement]);
    }
  cout << "Your Updated " << size << " Elements:" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;

    pivot = smallElement - 1;
    int secArraySorting = 0;
    for(int i=0; i<smallElement; i++)
    {
        if(arr[i] <= arr[pivot])
        {
            swap(arr[i], arr[secArraySorting]);
            secArraySorting++;
        }
    }
    if(smallElement - 1 != secArraySorting)
    {
        swap(arr[pivot], arr[secArraySorting]);
    }

  cout << "Your Updated " << size << " Elements:" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;

    pivot = size - 1;
    smallElement += 1; 
    for(int i=smallElement; i<size - 1 ; i++)
    {
        if(arr[i] <= arr[pivot])
        {
            swap(arr[i], arr[smallElement]);
            smallElement++;
        }
    }
    if(size - 1 != smallElement)
    {
        swap(arr[pivot], arr[smallElement]);
    }



    cout << "Your Updated " << size << " Elements:" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;


    }
};

int main()
{
    int size;
    cout << "How Many Elements You Want to Add in Container?" << endl;
    cin >> size;

    int array[size];

    cout << "Enter " << size << " Elements:" << endl;
    for(int i=0; i<size; i++)
        cin >> array[i];

    quickSort sort1(array, size);
    


}