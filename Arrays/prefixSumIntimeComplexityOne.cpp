#include<iostream>
using namespace std;
int prefixSum(int arr[],int n,int l,int r)
{
    int sum = 0;
    int* prefixSum = new int[n];
    prefixSum[0] = arr[0];
    for(int i = 1;i<n;i++)
    {
        prefixSum[i] = prefixSum[i-1]+arr[i];
    }
    if(l==0)
    {
        return prefixSum[r];
    }
    else
    {
        return prefixSum[r]-prefixSum[l-1];
    }
}
int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<prefixSum(arr,n,0,2);
    return 0;
}
