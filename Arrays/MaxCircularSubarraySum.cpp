#include<iostream>
using namespace std;
int NormalMaximumSumSubarray(int arr[],int n)
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
int CircularSum(int arr[],int n)
{
    int normalMax = NormalMaximumSumSubarray(arr,n);
    if(normalMax<0)
    {
        return normalMax;
    }
    int arr_sum = 0;
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int circularMax = arr_sum + NormalMaximumSumSubarray(arr,n);
    return max(normalMax,circularMax);
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
    cout<<CircularSum(arr,n);
    return 0;
}