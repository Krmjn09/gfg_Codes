#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void *toDelete(Node *ptr)
{
    Node *temp;
    temp = ptr->next;
    ptr ->data = temp->data;
    ptr->next = temp->next;
    delete temp;
    return ptr;
}
int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    Node *ptr = head->next->next;
    toDelete(ptr);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }

    return 0;
}