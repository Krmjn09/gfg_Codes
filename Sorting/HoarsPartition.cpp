#include<iostream>
using namespace std;
int HoarsPartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true)
    {
        do{
            i++;
        }
        while(arr[i]<pivot);
        do{
            j--;
        }
        while(arr[j]>pivot);
        if(i>=j) return j;
        swap(arr[j],arr[i]);
    }
}
int main()
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    HoarsPartition(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}