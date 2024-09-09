#include<iostream>
using namespace std;
// only for sorted array
int binarySearch(int arr[],int n,int ele)
{
    int start =0;
    int end = n-1;
    
    while(start<end)
    {
        int mid = start+(end-start)/2;
       if(ele == arr[mid])
       {
           return mid;
       }
       else if(ele<arr[mid])
       {
           end = mid-1;
       }
       else
       {
           start = mid+1;
       }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 20;
    int index = binarySearch(arr,n,ele);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<index;
    }
    return 0;
}