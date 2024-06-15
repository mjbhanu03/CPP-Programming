#include <iostream>

class Sorting
{
    public:
        void sorting(int size, int arr[])
        {
            int smallElement = 0, sortedArray = 0;

            while(sortedArray < size)
            {
                for(int i=sortedArray; i<size; i++)
                {
                    if(arr[i] < arr[smallElement])
                    {
                       smallElement = i;
                    }
                }
                std::swap(arr[sortedArray], arr[smallElement]);
                sortedArray++;

            }

            for(int i=0; i<8; i++)
           {
               std::cout << arr[i] << " ";
           }
        }
};

int main ()
{
    int arr[] = {2, 5, 7, 1, 9, 4, 6, 3};

    Sorting array1;
    array1.sorting(8, arr);

  
}