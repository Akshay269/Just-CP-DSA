#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *newNode(int data)
{
    node *Node = new node();
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
int main()
{
  
    return 0;
}