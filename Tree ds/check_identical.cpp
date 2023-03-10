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
int issame(node *a, node *b)
{
    if (a == NULL && b == NULL)
        return 1;
    if (a != NULL && b != NULL)
    {
        return (
            //prreorder traversal
            a->data==b->data && 
            issame(a->left,b->left) &&
            issame(a->right,b->right)

        );
    }
}
int main()
{
 node *root1 = newNode(1);
    node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
 
    if(issame(root1, root2))
        cout << "Both tree are identical.";
    else
        cout << "Trees are not identical.";
    return 0;
}