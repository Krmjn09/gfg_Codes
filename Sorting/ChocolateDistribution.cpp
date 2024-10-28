#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int chocolateDistribution(int arr[],int n,int m)
{
    if(m>n)
    {
        return -1;
    }
    int minDiff = INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i<n-m+1;i++)
    {
        minDiff = min(minDiff,arr[i+m-1]-arr[i]);
    }

    return minDiff;
}
int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 5;
    cout<<chocolateDistribution(arr,n,m)<<endl;
    return 0;
}