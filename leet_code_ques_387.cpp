#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Unique
{
public:
    int firstUniqChar(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            int count = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
            }
            if (count == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Unique object;
    string s = "leetcode";
    string s1 = "loveleetcode";
    string s2 = "aabb";
    cout << "Index of first unique character is:" << object.firstUniqChar(s) << endl;
    cout << "Index of first unique character is: " << object.firstUniqChar(s1) << endl;
    cout << "Index of first unique character is: " << object.firstUniqChar(s2) << endl;
    return 0;
}
