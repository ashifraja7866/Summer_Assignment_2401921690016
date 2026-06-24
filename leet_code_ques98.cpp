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
    long long previous = LLONG_MIN;
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
            return true;

        if (!isValidBST(root->left))
            return false;

        if (root->val <= previous)
            return false;

        previous = root->val;

        return isValidBST(root->right);
    }
};
int main()
{
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    B_S_T obj;
    bool ans = obj.isValidBST(root);
    if (ans)
    {
        cout << "The tree is a valid BST." << endl;
    }
    else
    {
        cout << "The tree is not a valid BST." << endl;
    }
    return 0;
}