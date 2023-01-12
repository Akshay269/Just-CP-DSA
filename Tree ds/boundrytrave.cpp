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

bool isLeaf(node* node, int data) {
    if (node == NULL)
        return false;    
    if (node.right == NULL && node.left == NULL)
        return true;
    return false; 
}

void addleftboundry(node *root,vector<int>&res){
    node* curr=root->left;
    while(curr){
        //agar current node leafnode nhi h toh res me push krdo
        if(!isLeaf(curr)) res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}

void addrightboundry(node *root,vector<int>&res){
    node* curr=root->right;
    vector<int>tmp;
    while(curr){
        //agar current node leafnode nhi h toh res me push krdo
        if(!isLeaf(curr)) tmp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=tmp.size()-1;i>=0;i--){
        res.push_back(tmp[i]);
    }
}

void addleaves(node* root,vector<int>&res){
    if(isLeaf(root)) {res.push_back(root->data);return ;}
    if(root->left) addleaves(root->left,res);
    if(root->right) addleaves(root->right,res);

}
int main()
{
   
    return 0;
}