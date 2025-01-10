#include<iostream>
#include<unordered_map>
using namespace std;
int LongestSubarrayWithEqualNumberOf0AND1(int arr[], int n)
{
  int prefix_sum = 0;
  int res = 0;
    unordered_map<int,int> m;

    for (int i = 0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i] = -1;
        }
    }
    // apply the same logic as LongestSubarrayWithGivenSum.cpp with sum = 0
        for (int i = 0;i<n;i++)
        {
            prefix_sum+=arr[i];
            if(prefix_sum ==0)
            res= i+1;
            if(m. find(prefix_sum)!=m.end())
            {
                res = max(res,i-m[prefix_sum]);
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
    int arr[] = {1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LongestSubarrayWithEqualNumberOf0AND1(arr,n);
    return 0;
}
// number of lookups is twice the size of the hash table