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
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL){
    temp->next = temp;
    return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
} // using swapping of data between head and temp
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
   head =  insertBegin(head,10);
   head =  insertBegin(head,20);
   head =  insertBegin(head,30);
    printlist(head);
    return 0;
}