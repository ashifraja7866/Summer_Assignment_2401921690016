#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class B_S_T
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL || root->val == val)
        {
            return root;
        }

        else if (root->val > val)
        {
            return searchBST(root->left, val);
        }

        else
        {
            return searchBST(root->right, val);
        }
    }
};
int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    B_S_T obj;
    TreeNode *ans = obj.searchBST(root, 2);
    if (ans != NULL)
    {
        cout << "Value found: " << ans->val << endl;
    }
    else
    {
        cout << "Value not found:" << ans->val << endl;
    }
    return 0;
}