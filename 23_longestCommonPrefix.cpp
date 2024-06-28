#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs, int size) {
        vector<string> check;

            string string1 = strs[0];
            int count = 0;
            for(int i = 0; i < size; i++)
            {   
                int j = 0;
                while(j < string1.length() && j < strs[i].length() && string1[j] == strs[i][j] )
                {
                    j++;
                }
                string1 = string1.substr(0, j); // Update prefix to the common prefix found so far
            if(string1.empty()) break;
            }

return string1;
        
    }
};
int main()
{
    Solution s1;
    vector<string> strs;
    int size;
    cout << "Enter how many strings you want to add?" << endl;
    cin >> size;
    cin.ignore();
    strs.resize(size);

    for(int i = 0; i < size; i++)
    getline(cin, strs[i]);

    
   string prefix = s1.longestCommonPrefix(strs, size);
    cout << prefix; 

}