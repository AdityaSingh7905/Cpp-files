#include <iostream>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

node *createBinaryTree(int v[])
{
    node *root = new node(v[0]);

    root->left = new node(v[1]);
    root->right = new node(v[2]);

    root->left->left = new node(v[3]);
    root->left->right = new node(v[4]);

    root->right->left = new node(v[5]);
    root->right->right = new node(v[6]);

    root->left->left->right = new node(v[7]);
    root->right->left->left = new node(v[8]);

    return root;
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(node *root)
{
    if (root == NULL)
        return;
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if (root == NULL)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

int main()
{
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // vector<int> v(n);
    // cout<<"Enter the elements in the array: ";
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
    // }
    int v[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Creating Binary Tree
    node *root = createBinaryTree(v);
    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
}