//This code will delete the element from the array which is selected by the user.

#include <iostream>

class array1
{
    public:
        short int place;
        void placeElement(int number, int arr[],int size)
        {
            for(int i=0; i<size; i++)
            {
                if(number == arr[i])
                {
                    place = i;
                }
            }

            for(int i=place; i<size; i++)
            {
                arr[i] = arr[i+1]; 
            }
            
            std::cout << "Your updated array is:" << std::endl;
            for(int i=0; i<size-1; i++)
            {
                std::cout << arr[i] << " " ;
            }

            
        } 
};

int main()
{
    array1 a;

    int size, number;
    std::cout << "How many elements you want to enter:" << std::endl;
    std::cin >> size;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        std::cin >> arr[i];
        std::cout << arr[i] << std::endl;
    }

    std::cout << "Which element you want to enter:" << std::endl;
    std::cin >> number;

    a.placeElement(number, arr, size);

}