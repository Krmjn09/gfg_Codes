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
Node *deleteLast(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next !=NULL)
    {
        curr = curr->next;

    }
    delete curr->next;
    curr->next = NULL;  
    return head;
}
int search(Node *head, int x)
{
    int i =1;
    Node *curr = head;
    while(curr!=NULL)
    {
        if(curr->data == x)
        return i;
        else 
        i++;
        curr = curr->next;

    }
    return -1;
}
void printList(Node *head)
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
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head-> next -> next -> next = new Node(40);
    head = deleteLast(head);
    int x = search(head,30);
    cout<<x<<endl;
    printList(head);
    return 0;
}
