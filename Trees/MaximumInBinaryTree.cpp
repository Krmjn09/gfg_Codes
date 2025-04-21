#include<iostream>
#include<limits.h>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int maxValue(Node *root)
{
    if(root==NULL) return INT_MIN;
    return max(root->data,max(maxValue(root->left),maxValue(root->right)));
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout<<maxValue(root)<<endl;
    return 0;
}