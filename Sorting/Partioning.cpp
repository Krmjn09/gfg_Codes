#include<iostream>
using namespace std;
// Naive approach
int naivepartition(int arr[], int l, int h, int p)
{
    int temp[h-l+1];
    int k = 0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[k]  = arr[i];
            k++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[k] = arr[i];
            k++;
        }
    }
    for(int i=l;i<=h;i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {5,13,6,9,12,11,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int p = 3;
    naivepartition(arr,0,n-1,p);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
