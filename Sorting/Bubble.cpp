#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n )
{
    int i,j;
    for( i =0;i<n-1;i++)
    {
        for(j = 0;j<(n-i-1);j++)
        {
           if(arr[j]>arr[j+1])
           {
            swap(arr[j],arr[j+1]);
           }
        }
    }
}
int main()
{
    int arr[] = {10,20,30,5,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}