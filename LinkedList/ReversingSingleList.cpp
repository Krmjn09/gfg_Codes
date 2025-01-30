#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
void reverse(vector<int>& arr,int start,int end)
{
    int temp ;
    while(start<end)
    {
        temp = arr[start];
        arr[start] =arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        ListNode *curr = head;
        vector<int> arr;
        int len =0;
        while(curr!=NULL)
        {
            len++;
            arr.push_back(curr->val);
            curr = curr->next;
        }
        reverse(arr,0,len-1);
        curr = head;
      int start=0;
        while(curr!=NULL )
        {
            curr->val = arr[start];
            curr = curr->next;
            start++;
           
        }
return head;
    }


ListNode *reversalnospace(ListNode* head) {
        if (!head) return nullptr;
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr!=NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        return prev;

}
};
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution obj;
  head = obj.reversalnospace(head);
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}