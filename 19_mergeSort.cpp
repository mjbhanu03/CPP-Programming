// Merge Sort

#include <iostream>
#include <vector>

using namespace std;

// This funtion just prints the array 
void printArray(int start, int end, vector<int> arr)
{
    for(int i = start; i < end; i++)
    cout << arr[i] << " ";
}

// This function will do merge the array one by one which has sliced before
void merge(vector<int>& arr, int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // create temporary array

    vector<int> startArray(n1);
    vector<int> endArray(n2);

    // Copy data to temporary arrays startArray[] and endArray[]
    for(int i = 0; i < n1; i++)
        startArray[i] = arr[start + i];
    for(int j = 0; j < n2; j++)
        endArray[j] = arr[mid + 1 + j];
 
// Merging the temporary arrays back into the original array
    int i = 0, j = 0, k = start;
    while(i < n1 && j < n2)
    {
        if(startArray[i] <= endArray[j])
        {
            arr[k] = startArray[i];
            i++;
        }
        else
        {
            arr[k] = endArray[j];
            j++;
        }
        k++;
    }

// Copy the remaining elements of the startArray[], if any 
    while(i < n1)
    {
        arr[k] = startArray[i];
        i++;
        k++;
    }
// Copy the remaining elements of the endArray[], if any 
    while(i < n1)
    {
        arr[k] = startArray[j];
        j++;
        k++;
    }


}

// Main function for sorting and this will slice the array and pass it to sub function (merge)
void mergeSort(vector<int>& arr, int start, int end)
{
    // Mid variable represents half of the array
    int mid = start + ( end - start ) / 2;

    if(start < end)
    {
// First of the array 
    mergeSort(arr, start, mid);
// Second half of array
    mergeSort(arr, mid + 1, end);
    }
    

    merge(arr, start, mid, end);

}

int main()
{
    // Vector means dynamic array in c++
    vector<int> arr;
    int size;

// Asking from user how many elements they want to add
    cout<< "Please enter how many elements you want to add?" << endl;
    cin >> size;

// Initializing the size to the array
    arr.resize(size);

// Getting the elements from the user
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    mergeSort(arr, 0, size - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    printArray(0, size, arr);



}
