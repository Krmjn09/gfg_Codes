#include<iostream>
using namespace std;
int searchInSortedAndRotated(int arr[],int n, int x)
{
    int low= 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;    
    if(arr[mid]==x)
    return mid;
    if(arr[low]<arr[mid]){
        // left half is sorted
        if(arr[low]<=x && x<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    else{
        // right half is sorted
        if(arr[mid]<x && x<=arr[high])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    }
    return -1;
}
int main()
{
    int arr[] = {100,200,10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x =200;
    cout<<searchInSortedAndRotated(arr,n,x);
    return 0;
}