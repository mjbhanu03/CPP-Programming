// This will print total odd and even numbers and there addition too.

#include <iostream>

class checkNumber
{
    public:
        void oddOrEven(int array[], int size)
        {
            int oddCount = 0, odd = 0, evenCount = 0, even = 0;
            std::cout << even << std::endl;
            for(int i=0; i<size; i++)
            {
                if(array[i]%2 == 0)
                {
                    evenCount++;
                    even += array[i]; 
                }
                
                else
                {
                    oddCount++;
                    odd += array[i]; 
                }
            }

            std::cout << "Odd's " << oddCount << " Number Are There And There Total Is " << odd << std::endl; 
            std::cout << "Even's " << evenCount << " Number Are There And There Total Is " << even << std::endl; 
        }
};

int main()
{
    int array[8] = {1, 3, 2, 6, 4, 8, 5, 7};

    checkNumber array1;

    array1.oddOrEven(array, 8);
}