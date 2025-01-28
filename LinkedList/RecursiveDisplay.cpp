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
void rdisplay(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    rdisplay(head->next);

}
int main()
{
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    rdisplay(head);
    return 0;
}