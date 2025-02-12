#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};
struct mystack
{
    Node *head;
    int size1;
    public:
    mystack()
    {
        size1 = 0;
        head = NULL;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head =temp;
        size1++;
    }
    void pop()
    {
        if(head == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        size1--;
    }
    int top()
    {
        if(head == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int size()
    {
        return size1;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.top();
    return 0;
}