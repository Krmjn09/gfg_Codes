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
Node *deletekth(Node *head, int x)
{
    if(head==NULL)
    {
        return NULL;
    }
    
    if(x==1)
    {
        delete head;
        return NULL;
    }
    Node *curr= head;
    int i =1;
    for(i=1;i<=x-2 && curr!=NULL;i++)
    {
        curr = curr->next;
        
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
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
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = head;
    head = deletekth(head, 2);
    printlist(head);
    return 0;
}