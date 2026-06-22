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
    Tree_Node *invertTree(Tree_Node *root)
    {
        if (root == NULL)
            return NULL;

        swap(root->left, root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

void inorder(Tree_Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    Tree_Node *root = new Tree_Node(4);

    root->left = new Tree_Node(2);
    root->right = new Tree_Node(7);

    root->left->left = new Tree_Node(1);
    root->left->right = new Tree_Node(3);

    root->right->left = new Tree_Node(6);
    root->right->right = new Tree_Node(9);

    

    Tree obj;
    root = obj.invertTree(root);

    cout << "Inverted Tree (Inorder): ";
    inorder(root);
    cout << endl;

    return 0;
}