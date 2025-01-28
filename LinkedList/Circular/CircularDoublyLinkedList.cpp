#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;

    }
};
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else{
        temp->next = head;
        temp->prev = head->prev;
        head->prev->next = temp;
        head->prev = temp;
        return temp;
    }
}
void printlist(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    Node *curr = head;
    do
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    while(curr!=head);
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    printlist(head);
    return 0;
}