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
Node *sortedInsert(Node *head, int x)
{
    Node *temp  = new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    if(x<head->data)
    {
        temp->next = head;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next!=NULL && curr->next->data < x)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}
void printList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    head = sortedInsert(head,10);
    head = sortedInsert(head,5);
    head = sortedInsert(head,7);
    head = sortedInsert(head,3);
    printList(head);
}