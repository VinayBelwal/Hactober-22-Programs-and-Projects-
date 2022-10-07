#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

int Btheight(Node *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
int getbalancefactor(Node *root)
{
    if (root == NULL)
        return 0;
    return Btheight(root->left) - Btheight(root->right);
}
Node *leftrotate(Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;
    y->height = max(Btheight(y->right), Btheight(y->left)) + 1;
    x->height = max(Btheight(x->left), Btheight(x->right)) + 1;
    return y;
}
Node *rightrotate(Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;
    y->height = max(Btheight(y->right), Btheight(y->left)) + 1;
    x->height = max(Btheight(x->left), Btheight(x->right)) + 1;
    return x;
}
Node *createnode(int val)
{
    struct Node *node = new struct Node;
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}
Node *BuildBst(Node *root, int val)
{
    if (root == NULL)
    {
        return (createnode(val));
    }

    if (val < root->data)
    {
        root->left = BuildBst(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = BuildBst(root->right, val);
    }
    root->height = 1 + max(Btheight(root->left), Btheight(root->right));
    int bf = getbalancefactor(root);
    //left left case -> rotate right
    if (bf > 1 && val < root->left->data)
    {
        return rightrotate(root);
    }
    //right right case ->rotate left
    if (bf < -1 && val > root->right->data)
    {
        return leftrotate(root);
    }
    //right left case ->rotate  right and left
    if (bf < -1 && val < root->right->data)
    {
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    //left right case-> rotate left and right
    if (bf > 1 && val > root->left->data)
    {
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct Node *root = NULL;
    root = BuildBst(root, 1);
    root = BuildBst(root, 2);
    root = BuildBst(root, 4);
    root = BuildBst(root, 5);
    root = BuildBst(root, 6);
    root = BuildBst(root, 3);
    preorder(root);
    return 0;
}