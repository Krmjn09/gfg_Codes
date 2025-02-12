#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void printPrevGreater(int arr[], int n)
{

    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<endl;
    for(int i =1;i<n;i++)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        int result = s.empty() ? -1 : s.top();
        cout<<result<<endl;
        s.push(arr[i]);
    }

}
void nextGreaterElememt(int arr[], int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    cout<<-1<<endl;
    for(int i = n-2;i>=0;i--)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        int result = s.empty() ? -1 : s.top();
        cout<<result<<endl;
        s.push(arr[i]);
    }
}
int main()
{
    int arr[] = {20,30,10,5,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    printPrevGreater(arr,n);
    cout<<endl;
    nextGreaterElememt(arr,n);
    return 0;
}