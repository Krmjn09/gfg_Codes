#include<iostream>
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
void printKdist(Node *root,int k)
{
    if(root==NULL) return;
    if(k==0) {
        cout<<root->data<<" ";
        return;
    }
    printKdist(root->left,k-1);
    printKdist(root->right,k-1);

}
int main()  {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int k=2;
    printKdist(root,k);
    cout<<endl;
    return 0;
}