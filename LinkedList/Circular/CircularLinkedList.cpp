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
    printlist(head);
    return 0;
}