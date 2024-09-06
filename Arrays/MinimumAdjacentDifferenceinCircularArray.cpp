#include<iostream>
#include<climits>
using namespace std;
class Solution
{
   public:
   int minDiff(int arr[],int n)
   {
    int diff = INT_MAX;
    for(int i =1;i<n;i++)
    {
        if((arr[i] - arr[i-1]) < diff)
        {
            diff = arr[i] - arr[i-1];
        }
        if(diff < 0 )
        {
            diff = -diff;
        }

    }
    if(arr[0] - arr[n-1] < diff)
    {
        diff = arr[0] - arr[n-1];
    }
    if(diff < 0)
    {
        diff = -diff;
    }
    return diff;
   }

};
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution obj;
    cout<<obj.minDiff(arr,n);
    return 0;
}