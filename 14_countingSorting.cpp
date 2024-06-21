#include <iostream>

using namespace std;

class sorting 
{
    public:
        void sortingFunction(int array[], int size)
        {
            int maxNumber = array[0];
                for(int i=0; i<size; i++)
                {
                    if(array[i] > maxNumber)
                    {
                        maxNumber = array[i];
                    }
                }

            int sizeOfAnotherArray = maxNumber + 1;
            int countArray[sizeOfAnotherArray] = {0};

            for(int i=0; i<size; i++)
            {
                countArray[array[i]] += 1;
            }
            int index = 0;
            for(int i=0; i<sizeOfAnotherArray; i++)
            {   
                while (countArray[i] > 0) {
                array[index++] = i;
                countArray[i]--;
            }
            }
            cout << "Your Sorted Array:" << endl;
            for(int i=0; i<size; i++)
                cout << array[i] << " ";
            
        }

};

int main()
{
    sorting s1;
    int size;
    
    cout << "Enter how many elements you want to add? " << endl;
    cin >> size;

    int array[size];
    for(int i=0; i<size; i++)
        cin >> array[i];
    
    s1.sortingFunction(array, size);
    
}