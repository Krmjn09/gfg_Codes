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
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    Node *curr = head;
    if(head == NULL)
    {
        return temp;
    }
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    curr->next= temp;
    temp -> next = NULL;
    return head;

}
void printlist(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head =  insertEnd(head,30);
    head =     insertEnd(head,40);
        printlist(head);
    return 0;
}