#include<iostream>
#include<climits>
using namespace std;
int selectionSort(int arr[], int n)
{
    int i,j;
    for(i = 0;i<n-1;i++)
    {
        int min_index = i;
        for(j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main()
{
    int arr[] = {10,5,8,20,2,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}