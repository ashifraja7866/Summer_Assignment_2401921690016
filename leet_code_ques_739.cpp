#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Temperature
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int m = temperatures.size();

        vector<int> res(m, 0);
        stack<int> at;

        for (int i = 0; i < m; i++)
        {
            while (!at.empty() && temperatures[i] > temperatures[at.top()])
            {
                res[at.top()] = i - at.top();
                at.pop();
            }

            at.push(i);
        }

        return res;
    }
};
int main()
{
    Temperature obj;
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> temperatures2 = {30, 40, 50, 60};
    vector<int> res = obj.dailyTemperatures(temperatures);
    vector<int> res2 = obj.dailyTemperatures(temperatures2);
    cout << "res: ";
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << "\nres2: ";
    for (int i : res2)
    {
        cout << i << " ";
    }

    return 0;
}