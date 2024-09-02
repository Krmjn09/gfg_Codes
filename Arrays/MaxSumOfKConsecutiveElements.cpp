#include<iostream>
#include<climits>
using namespace std;
int maxSum(int* arr,int n,int k)
{
    int i,j=0;
    int maxEnding = 0;
 
    for(int i=0;i<k;i++)
    {
        maxEnding+=arr[i];
    }
     i = 0;
    int Result = maxEnding;
    while(i<n-k+1)
    {
        maxEnding = max(maxEnding, maxEnding-arr[i]+arr[i+k]);
        Result = max(Result,maxEnding);
        i++;
    }

    
    return Result;
}
int main()
{
    int arr[] = {5,-10,6,96,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<maxSum(&arr[0], n, k);
    return 0;
}