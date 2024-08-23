#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

bool getPath(TreeNode *node, vector<int> &v, TreeNode *goalNode)
{
    if (node == NULL)
        return false;
    v.push_back(node->val);
    if (node->val == goalNode->val)
        return true;
    if (getPath(node->left, v, goalNode))
        return true;
    if (getPath(node->right, v, goalNode))
        return true;
    v.pop_back();
    return false;
}
int findLCA(vector<int> p, vector<int> q)
{
    int i = 0, j = 0;
    int m = p.size(), n = q.size();
    while (i < m && j < n)
    {
        if (p[i] != q[j])
            return p[i - 1];
        i++, j++;
    }
    if(i == m) return p[m-1];
    return q[n-1];
}
TreeNode *levelTraversal(TreeNode *node, int goalVal)
{
    queue<TreeNode *> q;
    q.push(node);
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        if (node->val == goalVal)
            return node;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return NULL;
}

void arrayTraversal(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    vector<int> pVec, qVec;
    getPath(root, pVec, p);
    getPath(root, qVec, q);
    arrayTraversal(pVec, pVec.size());
    arrayTraversal(qVec, qVec.size());
    int goalVal = findLCA(pVec, qVec);
    return levelTraversal(root, goalVal);
}

int main()
{
    TreeNode *root = new TreeNode(3);
    TreeNode *node1 = new TreeNode(5);
    TreeNode *node2 = new TreeNode(1);
    TreeNode *node3 = new TreeNode(6);
    TreeNode *node4 = new TreeNode(2);
    TreeNode *node5 = new TreeNode(7);
    TreeNode *node6 = new TreeNode(4);
    TreeNode *node7 = new TreeNode(0);
    TreeNode *node8 = new TreeNode(8);
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node7;
    node2->right = node8;
    node4->left = node5;
    node4->right = node6;
    TreeNode *ans = lowestCommonAncestor(root, node1, node6);
    cout << ans->val << endl;
}