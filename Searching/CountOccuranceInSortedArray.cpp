 #include<iostream>
using namespace std;
int first(int arr[],int n,int ele)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]>ele)
        {
            end = mid-1;
        }
        else if(arr[mid]<ele)
        {
            start = mid+1;
        }
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else
            {
                end = mid-1;
            }
        }
    }
    return -1;
}
int last(int arr[],int n,int ele)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]>ele)
        {
            end = mid-1;
        }
        else if(arr[mid]<ele)
        {
            start = mid+1;
        }
        else
        {
            if(mid==n-1 || arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else
            {
                start = mid+1;
            }
        }
    }
    return -1;
}
int Count(int arr[],int n,int ele)
{
    int firstIndex = first(arr,n,ele);
    if(firstIndex==-1)
    {
        return 0;
    }
    else
    {
        return last(arr,n,ele)-firstIndex+1;
    }
}
int main()
{
    int arr[] = {10,20,20,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 30;
    int count = Count(arr,n,ele);
    if(count==0)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found "<<count<<" times";
    }
    return 0;
}