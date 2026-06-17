#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Valid
{
public:
    bool isValid(string s)
    {
        stack<char> at;

        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                at.push(ch);
            }
            else
            {
                if (at.empty())
                    return false;

                if (ch == ')' && at.top() != '(')
                    return false;

                if (ch == '}' && at.top() != '{')
                    return false;

                if (ch == ']' && at.top() != '[')
                    return false;

                at.pop();
            }
        }

        return at.empty();
    }
};
int main()
{
    Valid obj;
    string s = "({[]})";
    string s1 = "({[})";
    string s2 = "({[]})";
    cout << obj.isValid(s) << endl;
    cout << obj.isValid(s1) << endl;
    cout << obj.isValid(s2) << endl;
}
