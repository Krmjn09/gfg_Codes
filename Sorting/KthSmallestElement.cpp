#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
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
        swap(arr[i],arr[j]);
    }
}
int kthSmallest(int arr[], int l, int h, int k)
{
    while(l<=h)
    {
        int p = partition(arr,l,h);
        if(p==k-1) return arr[p];
        else if(p>k-1) h = p-1;
        else l = p+1;
    }
}
int main()
{
    int arr[] = {10,4,5,8,11,6,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<kthSmallest(arr,0,n-1,k)<<endl;
    return 0;
}
