#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Stack_Decode
{
public:
    string decodeString(string s)
    {
        stack<int> numStack;
        stack<string> strStack;

        string current_String = "";
        int current_num_position = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (isdigit(s[i]))
            {
                current_num_position = current_num_position * 10 + (s[i] - '0');
            }
            else if (s[i] == '[')
            {
                numStack.push(current_num_position);
                strStack.push(current_String);

                current_num_position = 0;
                current_String = "";
            }
            else if (s[i] == ']')
            {
                int repeat = numStack.top();
                numStack.pop();

                string previous_String = strStack.top();
                strStack.pop();

                string temp = "";

                for (int j = 0; j < repeat; j++)
                {
                    temp += current_String;
                }

                current_String = previous_String + temp;
            }
            else
            {
                current_String += s[i];
            }
        }

        return current_String;
    }
};
int main()
{
    Stack_Decode obj;
    string s = "3[a]2[bc]";
    string s1 = "3[a2[c]]";
    string s2 = "2[abc]3[cd]ef";
    cout << obj.decodeString(s) << endl;
    cout << obj.decodeString(s1) << endl;
    cout << obj.decodeString(s2) << endl;
    return 0;
}
