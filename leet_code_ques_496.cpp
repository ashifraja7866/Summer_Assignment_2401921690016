#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;
class Gr8er_Element
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> mn;
        unordered_map<int, int> st;

        for (int num1 : nums2)
        {
            while (!mn.empty() && num1 > mn.top())
            {
                st[mn.top()] = num1;
                mn.pop();
            }
            mn.push(num1);
        }

        while (!mn.empty())
        {
            st[mn.top()] = -1;
            mn.pop();
        }

        vector<int> sol;

        for (int num1 : nums1)
        {
            sol.push_back(st[num1]);
        }

        return sol;
    }
};
int main()
{
    Gr8er_Element obj;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = obj.nextGreaterElement(nums1, nums2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
