// User gives number check that numbers how many times repeated in container
#include <iostream>

class checkNumber
{
    private:
        int number, size;
        int arr[];

    public:
        void setValue(int n, int s, int a[])
        {
            number = n;
            size = s;
            for(int i=0; i<size; i++)
                arr[i] = a[i];
        countOfNumber();
        }

        void countOfNumber()
        {
            int count = 0;
            for(int i=0; i<size; i++)
            {
                if(number == arr[i])
                {
                    count++;
                }
            }
            if(count == 0)
                std::cout << "This number is not available in the container." << std::endl;
            else                
            std::cout << "Number " << number << " is repeated " << count << " time" <<( count == 1? ".":"s.");   
        }

};

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 5, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int userNumber;
    checkNumber number;

    std::cout << "Enter Number:" << std::endl;
    std::cin >> userNumber;

    number.setValue(userNumber, size, arr); 

    

}
