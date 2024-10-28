#include<iostream>
using namespace std;
void merge(int arr[], int low, int high, int mid)
{
 
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1];
    int right[n2];

    for(int i = 0;i<n1;i++)
    {
        left[i] = arr[low+i];
    }

    for(int i = 0;i<n2;i++)
    {
        right[i] = arr[mid+1+i];
    }
    int i=0;
      int j=0;
    
    int k = low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;

        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    int mid;
    mid = (low+high)/2;
    if(low<high)
    {
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}
int main()
{
    int arr[] = {10,1,7,5,3,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}