// Merge two array with sorting

#include <iostream>

class Sorting
{
    public:
        void addArray(int size, int array[])
        {
            for(int i=0; i<size; i++)
            {
                std::cin >> array[i];
            }
            for(int i=0; i<size; i++)
            {
                std::cout << array[i] << " ";
            }
        }

        void mergeArray(int size3, int sizeOfFirstArray,int array3[], int array1[], int array2[])
        {
            for(int i=0; i<size3; i++)
            {
                if(i < sizeOfFirstArray)
                {
                    array3[i] = array1[i];
                }
                else 
                {
                    array3[i] = array2[i - sizeOfFirstArray];
                }
            }
            sortArray(size3, array3);
             for(int i=0; i<size3; i++)
            {
                std::cout << array3[i] << " ";
            }
        
        }

        void sortArray(int size3, int array[])
        {
            for(int i=0; i<size3; i++)
            {
                for(int j=0; j<size3; j++)
                {
                    if(array[i] < array[j])
                    {
                        std::swap(array[i], array[j]);
                    }
                }
            }
        }

        

};

int main()
{
    Sorting s1;
    int size1, size2;
    std::cout << "Enter size of the both container:\n" << "Container 1:";
    std::cin >> size1 ;
    std::cout <<"Container 2:";
    std::cin >> size2 ;
    
    int array1[size1] = {}; 
    int array2[size2] = {};
    int size3 = size1 + size2;
    int array3[size3] = {};

    std::cout << "Enter first array" << std::endl;
    s1.addArray(size1, array1);

    std::cout << "\nEnter second array" << std::endl;
    s1.addArray(size2, array2);
    std::cout <<  std::endl;

    s1.mergeArray(size3, size1, array3, array1, array2);
}