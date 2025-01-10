#include<iostream>
#include<unordered_map>
using namespace std;
void morethannktimes(int arr[], int n , int k)
{
    unordered_map<int, int> m;
    for(int i =0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>n/k)
        {
            cout<<x.first<<" ";
        }

    }
}
int main()
{
    int arr[] = {3,1,2,2,1,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    morethannktimes(arr,n,k);
    return 0;
}
// there is one more method for very small k values
// that is in o(nk) time complexity morethannkWITHnkComplexity.cpp
