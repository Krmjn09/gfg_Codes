#include<iostream>
using namespace std;
int OptimisedBubbleSort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }

        }
        if(swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {10,20,30,5,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    OptimisedBubbleSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//timw complexity of bubble sort is O(n^2) but if the array is already sorted then the time complexity will be O(n)