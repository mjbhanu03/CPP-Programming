#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> unsortedArr;
        int sizeOfNums = sizeof(nums)/sizeof(nums[0]);
        
        int place = 0;
        unsortedArr.resize(sizeOfNums);

        for(int i = 0; i < sizeOfNums; i++)
        {
            unsortedArr[i] = nums[i];
            nums[i] = 00;
        }

        for(int i = 0; i <= sizeOfNums ; i++)
            for(int j = place; i > 0; i-- )
        {
            {
             if(nums[j] == unsortedArr[i])
             {
                break;
             }
             else
             {
                nums[place] = unsortedArr[i];
                place++;
             }
            }
        }

        return place + 1;
    }
};

int main()
{   
    Solution s1;
    vector <int> nums = {1, 1, 2, 8, 5, 5, 6, 8, 4, 7};
    cout << s1.removeDuplicates(nums);


    
}