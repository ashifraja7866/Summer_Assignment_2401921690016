#include <iostream>
#include <stack>
using namespace std;
class Queue_using_stacks
{
public:
    stack<int> int_s1, out_s2;

    Queue_using_stacks()
    {
    }

    void push(int x)
    {
        int_s1.push(x);
    }

    int pop()
    {
        if (out_s2.empty())
        {
            while (!int_s1.empty())
            {
                out_s2.push(int_s1.top());
                int_s1.pop();
            }
        }
        int top = out_s2.top();
        out_s2.pop();
        return top;
    }

    int peek()
    {
        if (out_s2.empty())
        {
            while (!int_s1.empty())
            {
                out_s2.push(int_s1.top());
                int_s1.pop();
            }
        }
        return out_s2.top();
    }

    bool empty()
    {
        return int_s1.empty() && out_s2.empty();
    }
};
int main()
{
    Queue_using_stacks obj;

    obj.push(1);
    obj.push(2);

    cout << obj.peek() << endl;
    cout << obj.pop() << endl;
    cout << boolalpha << obj.empty() << endl;

    return 0;
}
