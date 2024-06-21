//Radix Sorting with LSD method
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//Function to get the Maximum value in an array
int getMax(const vector<int>& arr)
{
    return *max_element(arr.begin(), arr.end());
}

// Function to perfom counting sort based on the digit represent by exp
void countingSort(vector<int>& arr, int exp)
{
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    //store count of occurrences of digits in count[]
    for(int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }

    // Change count[i] so that it contains the actual position of this digit in output[]
    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1]; 
    }

    // Build the output array 
    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr now contains sorted numbers according to the current digit
    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }


    cout << "Sorted Array In " << exp << " Form:\n";
    for(int num1 : arr) 
    {
        cout << num1 << " ";
    }
    cout << endl;

}


//main function for sorting 
int radixSort(vector<int>& arr)
{
    //find the maximum number to know the number of digits
    int maxVal = getMax(arr);

    //Do counting sort for every digit. 
    // NOTE: that instead of passing the digit number, exp is passed.
    // exp is 10^i where i is the current digit number
    for(int exp = 1; maxVal / exp > 0; exp *= 10 )
    {
        countingSort(arr, exp);
    }
}

int main()
{
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original Array:\n";
    for(int num : arr) 
    {
        cout << num << " ";
    }
    cout << endl;

    radixSort(arr);

    cout << "Sorted Array:\n";
    for(int num1 : arr) 
    {
        cout << num1 << " ";
    }
    cout << endl;

    return 0;
}