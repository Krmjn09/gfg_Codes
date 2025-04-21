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
Node* previousNode = NULL;
Node *BTTtoDLL(Node* root){
    if(root==NULL) return NULL;
    Node *head = BTTtoDLL(root->left);
    if(previousNode==NULL){
        head = root;
    }
    else{
        root->left = previousNode;
        previousNode->right = root;
    }
    previousNode = root;
    BTTtoDLL(root->right);
    return head;


}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->right;
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node* head = BTTtoDLL(root);
    printList(head);
    return 0;
}
