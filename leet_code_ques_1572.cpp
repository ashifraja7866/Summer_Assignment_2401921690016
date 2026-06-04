#include <iostream>
#include <vector>
using namespace std;
class D_sum
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int D_sum = 0;

        for (int i = 0; i < n; i++)
        {
            D_sum += mat[i][i];
            D_sum += mat[i][n - 1 - i];
        }
        if (n % 2 == 1)
        {
            D_sum -= mat[n / 2][n / 2];
        }
        return D_sum;
    }
};
int main()
{

    vector<vector<int>>
        mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    D_sum obj;
    cout << obj.diagonalSum(mat);
    return 0;
}