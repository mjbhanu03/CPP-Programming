//Checks the number repeating how much time 
#include <iostream>

class Frequency
{
    // private:
        
    public:
        void checkNumberOfTimesRepeated(int size, int arr[])
        {
            while(1)
            {

                static int elementNumber = 0;
                int count = 0;
                for(int i=0; i<size; i++)
                {
                    if(arr[elementNumber] == arr[i])
                    {
                        count++;
                    }
                }
                std::cout << arr[elementNumber] << " is repeated "<< count << std::endl;
                elementNumber++;

                if(elementNumber == size)
                {
                    break;
                }
            }
        }
};  

int main()
{
    int array[] = {1, 2, 2, 1, 5, 8, 9, 1, 5, 6, 6};
    Frequency array1;

    array1.checkNumberOfTimesRepeated(11, array);
}