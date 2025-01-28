#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
        }
        temp->next = head;
        head -> prev = temp;
        temp->prev = NULL;
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
        }
    Node *curr = head;
    while(curr->next !=NULL)
    {
        curr= curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;

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
    Node *head = NULL;
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    head = insertBegin(head, 40);
    head = insertBegin(head, 50);
    head = insertBegin(head, 60);
    head = insertEnd(head,70);
printList(head);
    return 0;
}