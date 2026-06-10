#include <iostream>
#include <string>
using namespace std;
class Occurrences
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.length() > haystack.length())
            return -1;
        for (int i = 0; i <= haystack.length() - needle.length() + 1; i++)
        {
            int count = 0;
            for (int j = 0; j < needle.length(); j++)
            {
                if (haystack[i + j] == needle[j])
                    count++;
                else
                    break;
            }
            if (count == needle.length())
                return i;
        }
        return -1;
    }
};
int main()
{
    Occurrences obj;
    string haystack, needle;
    cout << obj.strStr("sadbutsad", "sad") << endl;
    cout << obj.strStr("leetcode", "leeto") << endl;
    return 0;
}
