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
Node *deleteHead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
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
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    head = deleteHead(head);
    printlist(head);
    return 0;
}