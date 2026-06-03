#include <iostream>
#include <vector>
using namespace std;
class ZeroesProblem
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int K = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[K] = nums[i];
                K++;
            }
        }
        while (K < nums.size())
        {
            nums[K] = 0;
            K++;
        }
    }
};
int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    ZeroesProblem obj;
    obj.moveZeroes(nums);
    for (int num : nums)
    {

        cout << num << " ";
    }
    return 0;
}
