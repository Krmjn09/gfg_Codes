#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while( fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
           break;
        }
    }
    if(slow!=fast)
    {
        return head;
    }
    slow = head;
    while(slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    return head;

}
void printlist(ListNode *head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
}
int main()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    head = detectCycle(head);
    printlist (head);
    return 0;
}