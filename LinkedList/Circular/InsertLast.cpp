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
Node *insertLast(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head== NULL)
    {
        temp->next = temp;
        return temp;
    }
    Node *curr = head;
    while(curr->next!=head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return head;
}
Node *optimisedInsertLast(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head== NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
     
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
head = optimisedInsertLast(head,10);
head = optimisedInsertLast(head,20);
head = optimisedInsertLast(head,30);
    printlist(head);
    return 0;

}