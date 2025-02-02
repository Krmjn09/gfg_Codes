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
Node *insertPos(Node *head, int pos, int x)
{
    Node *temp = new Node (x);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i =1;i<pos-1 && curr!=NULL;i++)// why pos-1 and not pos because we have to insert the element before the position
    {
         curr = curr->next;
         

    }
    if(curr==NULL)
    {
        return head;
    }// if the position is greater than the length of the linked list then return the head as it is BEACUSE ITS NOY POSSIBLE TO INSERT THE ELEMENT AT THAT POSITION
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }}
int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
  
    head = insertPos(head,4,15);
    printList(head);
    return 0;

}