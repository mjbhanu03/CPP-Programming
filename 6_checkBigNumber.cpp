// Find out the bigger number from the array
#include <iostream>

class Number
{
    public:
    int bigNumber(int arr[], int size);
};
    
    int Number::bigNumber(int arr[], int size){

        int bigNum = arr[0];
        for(int i=0; i<size; i++)
        {
            if(arr[i] > bigNum)
            {
                bigNum = arr[i];
            }
        }
        return bigNum;
    }

int main()
{
    Number array1;  
    int size;

    std::cout << "How many elements you want to add?\n"; 
    std::cin >> size;

    int array[size] = {};
    std::cout << "Please enter " << size << " elements:\n";

    for(int i=0; i<size; i++)
    {
        std::cin >> array[i];
    }

    

    std::cout << "This is the Biggest Number in the container:\n" << array1.bigNumber(array, size) << std::endl;
    delete[] array;
    return 0;
}
