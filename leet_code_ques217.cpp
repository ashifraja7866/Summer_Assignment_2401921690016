#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Duplicate_Problem
{
public:
    bool containsDuplicate(vector<int> &num2)
    {
        unordered_set<int> Empty;
        for (int num1 : num2)
        {
            if (Empty.count(num1))
            {
                return true;
            }
            else
            {
                Empty.insert(num1);
            }
        }

        return false;
    }
};
int main()
{
    vector<int> num2 = {1, 2, 3, 1};
    Duplicate_Problem obj;
    cout << obj.containsDuplicate(num2);
    return 0;
}