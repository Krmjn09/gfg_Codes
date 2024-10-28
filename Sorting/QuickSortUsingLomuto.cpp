#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;
    int j = l;
    for(j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int quicksort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}