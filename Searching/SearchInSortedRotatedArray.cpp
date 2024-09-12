#include<iostream>
using namespace std;
int SearchInSortedAndRotated(int arr[],int n , int x){
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low] && x<arr[mid])
            high = mid - 1;
            else
            low = mid + 1;
        }
        else
        {
            if(x>arr[mid] && x<=arr[high])
            low = mid + 1;
            else
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {11,12,15,18,2,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 15;
    cout<<SearchInSortedAndRotated(arr,n,x);
    return 0;
}