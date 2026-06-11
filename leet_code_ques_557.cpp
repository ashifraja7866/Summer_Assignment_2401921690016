#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Reverse_Words_String
{
public:
    string reverse_words(string A)
    {
        int n = A.length();
        for (int i = 0; i < n; i++)
        {
            if (A[i] != ' ')
            {
                int j = i;
                while (j < n && A[j] != ' ')
                {
                    j++;
                }
                reverse(A.begin() + i, A.begin() + j);
                i = j;
            }
        }
        return A;
    }
};
int main()
{
    Reverse_Words_String obj;
    string A = "Let's take LeetCode contest";
    cout << obj.reverse_words(A);
    return 0;
}