#include <iostream>

class Sorting
{
    public:
    void insertionSorting(int size, int arr[]){
        for(int i=0; i<size; i++)
        {
            for(int j=i; j>0; j--)
            {
                if(arr[j] < arr[j-1])
                {
                    std::swap(arr[j], arr[j-1]);
                }
            }

        for(int k=0; k<10; k++)
        {
            std::cout << arr[k]; 
        }
        }
    }
};

int main ()
{
    int arr[] = {2, 5, 7, 1, 9, 4, 6, 3};

    Sorting array1;
    array1.insertionSorting(8, arr);

  
}