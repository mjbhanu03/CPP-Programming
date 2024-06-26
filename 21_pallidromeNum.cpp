#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int isPalindrome(int x) {
        string numStr = to_string(x);

        string num = numStr;
        reverse(numStr.begin(), numStr.end());

        if(num == numStr)
        {
            cout << "Yes, it's a palidrome Number." << endl;
        }
        else
        {
            cout << "no, it's not palidrome Number." << endl;
        }
    }
};

int main()
{
    Solution s1;
    int x;
    cout << "Enter a Number:" << endl;
    cin >> x;
    s1.isPalindrome(x);

}