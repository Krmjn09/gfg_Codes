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
Node *segregate(Node *head)
{
    Node *evenStart = NULL;
    Node *evenEnd = NULL;
    Node *oddStart = NULL;
    Node *oddEnd = NULL;
    Node *curr = head;
    while(curr!=NULL)
    {
        int x = curr->data;
        if(x%2==0)
        {
            if(evenStart==NULL)
            {
                evenStart = curr;
                evenEnd = evenStart;
            }
            else
            {
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        }
        else
        {
            if(oddStart==NULL)
            {
                oddStart = curr;
                oddEnd = oddStart;
            }
            else
            {
                oddEnd->next = curr;
                oddEnd = oddEnd->next;
            }
        }
        curr = curr->next;
    }
    if(oddStart==NULL || evenStart==NULL)
    {
        return head;
    }
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    return evenStart;
}
int main()
{
    Node *head = new Node(17);
    head -> next = new Node(15);
    head -> next -> next = new Node(8);
    head -> next -> next -> next = new Node(12);
    head -> next -> next -> next -> next = new Node(10);
    head -> next -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next -> next = new Node(4);
    Node *newHead = segregate(head);
    while(newHead!=NULL)
    {
        cout<<newHead->data<<" ";
        newHead = newHead->next;
    }
    return 0;
}