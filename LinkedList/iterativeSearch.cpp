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
    cout<<search(head,20);
    return 0;
}
