#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Anagram
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
int main()
{
    Anagram object;
    string s = "anagram";
    string t = "nagaram";
    string s1 = "rat";
    string t1 = "car";
    if (object.isAnagram(s, t))
    {
        cout << "The strings are anagram" << endl;
    }
    else
    {
        cout << "The strings are not anagram" << endl;
    }
    if (object.isAnagram(s1, t1))
    {
        cout << "The strings2 are anagrams" << endl;
    }
    else
    {
        cout << "The strings2 are not anagrams" << endl;
    }

    return 0;
}