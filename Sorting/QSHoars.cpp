#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int i = l-1;
    int j =h+1;
    int pivot = arr[l];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}
void qsort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = partition(arr,l,h);
        qsort(arr,l,p);
        qsort(arr,p+1,h);
    }
}
int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}