#include<iostream>
using namespace std;
 int FirstOccurance(int arr[],int n,int ele,int start,int end)
 {
    if(start>end)
    {
        return -1;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]>ele)
    return FirstOccurance(arr,n,ele,start,mid-1);
    else if(arr[mid]<ele)
    return FirstOccurance(arr,n,ele,mid+1,end);
    else
    {
        if(mid==0 || arr[mid-1]!=arr[mid])
        return mid;
        else
        return FirstOccurance(arr,n,ele,start,mid-1);
    }
 }
 int iterativeOccurance(int arr[],int n,int ele)
 {
     int start = 0;
     int end = n-1;
     while(start<=end)
     {
         int mid = start+(end-start)/2;
         if(arr[mid]>ele)
         end = mid-1;
         else if(arr[mid]<ele)
         start = mid+1;
         else
         {
             if(mid==0 || arr[mid-1]!=arr[mid])
             return mid;
             else
             end = mid-1;
         }
     }
     return -1;
 }
int main()
{
    int arr[] = {10,20,20,30,30,30,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 30;
    int index = FirstOccurance(arr,n,ele,0,n-1);
    if(index==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<index;
    }
    cout<<endl;
    int index1 = iterativeOccurance(arr,n,ele);
    if(index1==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found at index "<<index1;
    }
    
    return 0;
}