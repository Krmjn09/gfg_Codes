#include<iostream>
using namespace std;
int InsertionSort(int arr[], int n)
{
    for(int i = 1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0&& arr[j]<key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
return 0;
}
int main()
{
    int arr[] = {10,20,30,5,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}