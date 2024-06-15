#include <iostream>
class Bubble
{
        private:
        int size;
    
        public:
        Bubble(int s, int array[]) : size(s)
        {
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    if(array[i] < array[j])
                    {
                        std::swap(array[i], array[j]);
                    }
                }

            }
            for(int i=0; i<size; i++){
                    std::cout << array[i] << "," ; 
            }
        }
};
int main()
{
    
    int arr[] = {1, 22, 9, 8, 5, 6, 4, 2, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    Bubble array1(size, arr);
}