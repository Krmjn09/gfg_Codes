#include<iostream>
using namespace std;
void countSort(int arr[], int n, int exp)
{
    int* count = new int[10]();
    int* b = new int[n];
    for(int i =0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(int i =1;i<10;i++)
    {
        count[i] += count[i-1];
    }
    for(int i = n-1;i>=0;i--)
    {
        b[--count[(arr[i]/exp)%10]] = arr[i];
    }
    for(int i =0;i<n;i++)
    {
        arr[i] = b[i];
    }
    delete[] count;
    delete[] b;
}
void radixSort(int arr[], int n)
{
    int mx =  arr[0];
    for(int i =1;i<n;i++)
    {
        mx = max(mx,arr[i]);
    }
    for(int exp = 1; mx/exp>0;exp*=10)
    {
        countSort(arr,n,exp);
    }
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}