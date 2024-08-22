#include<iostream>
using namespace std;
// Maximum Sum Subarray
// Time Complexity: O(n)
// Space Complexity: O(1)
// Kadane's Algorithm
int MaximumSumSubarray(int arr[],int n)
{
   int result= arr[0];
   int maxEnding = arr[0];
   for(int i=1;i<n;i++)
   {
       maxEnding = max(maxEnding+arr[i],arr[i]);
       result = max(result,maxEnding);
   }
    return result;
}
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
    cout<<MaximumSumSubarray(arr,n);
    return 0;
}
