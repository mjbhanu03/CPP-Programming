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
                std::cout << arr[elementNumber] << std::endl;
                elementNumber++;

                if(elementNumber == size)
                {
                    exit;
                }
            }
        }
};  