#include <iostream>
#include <string>
using namespace std;
class SubstringPattern
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();

        for (int i = n / 2; i >= 1; i--)
        {
            if (n % i == 0)
            {
                string substr = s.substr(0, i);
                string newstr = "";

                for (int j = 1; j <= n / i; j++)
                {
                    newstr += substr;
                }

                if (newstr == s)
                {
                    return true;
                }
            }
        }

        return false;
    }
};
int main()
{
    SubstringPattern obj;
    cout << obj.repeatedSubstringPattern("abab") << endl;
    cout << obj.repeatedSubstringPattern("aba") << endl;
    cout << obj.repeatedSubstringPattern("abcabcabcabc") << endl;

    return 0;
}