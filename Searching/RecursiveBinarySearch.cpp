#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int ele,int start,int end)
{
    if(start>end)
    {
        return -1;
    }
   
        int mid= start+(end-start)/2;
        if(arr[mid]==ele)
        {
            return mid;
        }
        if(arr[mid]>ele)
        {
            return binarySearch(arr,n,ele,start,mid-1);

        }
        else
        {
            return binarySearch(arr,n,ele,mid+1,end);
        }

    }

int main()
{
    int arr[] = {10,10,20,20,30,30,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 20;
    int index = binarySearch(arr,n,ele,0,n-1);
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
//Time complexity of Recursive Binary Search is ceiling of O(logn) and space complexity is O(logn) because of recursive stack.
// for uncessful search it is theta(logn) and for successful search it is O(1).