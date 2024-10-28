#include<iostream>
using namespace std;
void countSort(int arr[], int n, int k )
{
    int* count = new int[k+1]();
    int* b = new int[n];
    for(int i =0;i<=k;i++)
    {
        count[arr[i]]++;
      
    }
    for(int i =1;i<=k;i++)
    {
        count[i] += count[i-1];
    }
    for(int i = n-1;i>=0;i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    for(int i =0;i<n;i++)
    {
        arr[i] = b[i];
    }
      delete[] count;
        delete[] b;
}
int main()
{
    int arr[] = {1,4,4,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    countSort(arr,n,k);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
