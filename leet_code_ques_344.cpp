#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Reverse_String
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
int main()
{
    Reverse_String obj;
    vector<char> s{'H', 'e', 'l', 'l', 'o'};
    obj.reverseString(s);
    for (char c : s)
    {
        cout << c;
    }
}
