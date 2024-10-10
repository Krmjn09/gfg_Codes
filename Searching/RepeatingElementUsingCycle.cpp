#include<iostream>
#include<vector>
using namespace std;
int repeatingElement(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow =  arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow!=fast);
    slow = arr[0];
    while(slow!= fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;

}
int main()
{
    int arr[] = {1,3,4,2,5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<repeatingElement(arr,n);
    return 0;
}