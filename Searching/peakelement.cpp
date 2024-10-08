#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    int low= 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if((mid==0||arr[mid-1]<=arr[mid]) && (mid==n-1||arr[mid+1]<=arr[mid]))
        {
            return arr[mid];
        }
        if(mid>0 && arr[mid]<=arr[mid-1])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<peak(arr,n);
    return 0;
}


// logic is to find the peak element in an array
// if the mid element is greater than its neighbours then return mid
// time complexity is O(logn)
// space complexity is O(1)