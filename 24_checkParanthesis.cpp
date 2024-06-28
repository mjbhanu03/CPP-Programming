// Check which brackets opened are closed or not
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else if (ch == ')' || ch == '}' || ch == ']') {
                if (stack.empty()) return false;
                char top = stack.top();
                stack.pop();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return stack.empty(); // Stack should be empty for valid sequence
    }
};

int main()
{
    Solution s1;
    string a = "{([])}";
    string b = "{}[]()";
    string c = "{()";
    string d = "{}";

    cout << s1.isValid(a) << endl;
    cout << s1.isValid(b) << endl;
    cout << s1.isValid(c) << endl;
    cout << s1.isValid(d) << endl;
}
