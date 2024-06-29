#include <iostream>
#include <vector>

using namespace std;

class Search
{
public:
    void sorting(vector<int> &arr, int size)
    {
        int small = 0;
        while (small != size)
        {
            for (int i = small; i < size; i++)
            {
                if (arr[small] > arr[i])
                {
                    swap(arr[small], arr[i]);
                }
            }
            small++;
        }
        cout << "Your Array:" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void binarySearch(vector<int> arr, int size, int number, int low)
    {
        int halfOfarray = (low + size) / 2;


            if (number <= arr[halfOfarray])
            {
                if (number == arr[halfOfarray])
                {
                    cout << halfOfarray << " index";
                }
                else if(number != arr[halfOfarray] && halfOfarray == 0)
                {
                    cout << "Sorry, No Element found.";
                }
                else
                {
                    binarySearch(arr, halfOfarray, number, 0);
                }
            }
            else
            {
                binarySearch(arr, size, number, halfOfarray);
            }
        
    }
};

int main()
{
    Search s1;
    vector<int> arr;
    int size, number;

    cout << "Enter size of container:" << endl;
    cin >> size;
    arr.resize(size);


    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            s1.sorting(arr, size);
            break;
        }
    }

    cout << "\nPlease enter a number:";
    cin >> number;

    s1.binarySearch(arr, size, number, 0);
}