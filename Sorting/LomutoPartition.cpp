#include<iostream>
using namespace std;
int lpartition(int arr[], int n)
{
    int pivot = arr[n-1];
    int l=0;
    int h= n-1;
    int i = l-1;
    for(int j = l;j<=h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
}
int main()
{
    int arr[] = {10,80,30,90,40,50,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    lpartition(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}