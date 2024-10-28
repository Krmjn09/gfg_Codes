#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int minDifference(int arr[], int n)
{
    int minDiff = INT_MAX;
    sort(arr,arr+n);
    for(int i = 1;i<n;i++)
    {
        minDiff = min(minDiff,arr[i]-arr[i-1]);
    }
    return minDiff;
    


}
int main()
{
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minDifference(arr,n)<<endl;
    return 0;
}