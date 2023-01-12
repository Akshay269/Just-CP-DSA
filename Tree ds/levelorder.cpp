#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printlevelOrder(Node *root)
{
    queue<Node *> q;
    // vector<vector<int>> ans;
    // vector<int> level;
    if (root == NULL)
        return;
    q.push(root);
    while (q.empty() == false)
    {
        Node *node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
        
        // level.push_back(node->data);
    }
    // ans.push_back(level);
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
 
    cout << "Level Order traversal of binary tree is \n";
    printlevelOrder(root);
 
    return 0;
}