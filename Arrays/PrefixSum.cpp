#include<iostream>
using namespace std;
int prefixSum(int arr[],int n,int l,int r)
{int sum =0;
while(l<=r)
{
    sum+=arr[l];
    l++;
}
return sum;
}
int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<prefixSum(arr,n,0,2);
    return 0;
}