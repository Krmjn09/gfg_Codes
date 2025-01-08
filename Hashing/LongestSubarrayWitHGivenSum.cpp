#include<iostream>
#include<unordered_map>
using namespace std;
int LongestSubarrayWithGivenSum(int arr[], int n, int sum)
{
    int prefix_sum = 0;
   int res = 0;
    unordered_map<int,int> m;
    for(int i =0;i<n;i++)
    {
        prefix_sum+= arr[i];
        if(prefix_sum == sum)
        {
            res = i+1;
        }
        if(m.find(prefix_sum-sum)!=m.end())
        {
            res = max(res,i-m[prefix_sum-sum]);
        }
        if(m.find(prefix_sum)==m.end())
        {
            m[prefix_sum] = i;
        }
}
return res;
}
int main()
{
    int arr[] = {8,3,1,5,-6,6,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 4;
    cout<<LongestSubarrayWithGivenSum(arr,n,sum);
    return 0;
}