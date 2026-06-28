#include <iostream>
#include <vector>
using namespace std;
class Tree_Node
{
public:
    int val;
    Tree_Node *left;
    Tree_Node *right;
    Tree_Node(int x) : val(x), left(NULL), right(NULL) {}
};
class Tree_Symmetric
{
public:
    bool isSymmetric(Tree_Node *left, Tree_Node *right)
    {
        if (left == NULL && right == NULL)
            return true;
        if (left == NULL || right == NULL)
            return false;
        if (left->val != right->val)
            return false;

        return isSymmetric(left->left, right->right) &&
               isSymmetric(left->right, right->left);
    }

    bool isSymmetric(Tree_Node *root)
    {
        if (root == NULL)
            return true;
        return isSymmetric(root->left, root->right);
    }
};
int main()
{

    Tree_Node *root = new Tree_Node(1);
    Tree_Node *left = new Tree_Node(2);
    Tree_Node *right = new Tree_Node(2);
    root->left = left;
    root->right = right;
    Tree_Symmetric obj;
    if (obj.isSymmetric(root))
        cout << "The tree is symmetric." << endl;
    else
        cout << "The tree is not symmetric." << endl;
}