#include <iostream>
#include <vector>

class User
{
public:
    void setArray()
    {
        std::vector<int> arr = {2, 4, 6, 3, 9, 8, 7}; 
        sortingOfArray(arr); // Sort existing elements

        // Print sorted array
        std::cout << "Sorted Array: ";
        for(int i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Add new element and maintain sorted order
        int newElement;
        std::cout << "Enter new element to add: ";
        std::cin >> newElement;

        addElement(arr, newElement); // Add new element and maintain sorted order

        // Print updated array
        std::cout << "Updated Array: ";
        for(int i = 0; i < arr.size(); i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    void sortingOfArray(std::vector<int>& arr)
    {
        // Implementing selection sort for demonstration
        for(int i = 0; i < arr.size() - 1; i++)
        {
            int minIndex = i;
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            // Swap arr[i] and arr[minIndex]
            if(minIndex != i)
            {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }

    void addElement(std::vector<int>& arr, int newElement)
    {
        // Insert new element while maintaining sorted order
        int i = 0;
        while(i < arr.size() && arr[i] < newElement)
        {
            i++;
        }
        arr.insert(arr.begin() + i, newElement);
    }
};

int main()
{
    User u1;
    u1.setArray();
    return 0;
}
