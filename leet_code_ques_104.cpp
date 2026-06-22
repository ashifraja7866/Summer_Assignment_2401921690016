#include <iostream>
#include <algorithm>
using namespace std;
struct Tree_Node
{
    int val;
    Tree_Node *left;
    Tree_Node *right;

    Tree_Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Tree
{
public:
    int maxDepth(Tree_Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }
};

int main()
{

    Tree_Node *root = new Tree_Node(3);
    root->left = new Tree_Node(9);

    root->right = new Tree_Node(20);
    root->right->left = new Tree_Node(15);
    root->right->right = new Tree_Node(7);

    Tree obj;

    cout << "Max_Depth = "
         << obj.maxDepth(root) << endl;

    return 0;
}
