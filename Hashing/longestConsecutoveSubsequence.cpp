#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int longestConsecutiveSubsequence(int arr[], int n)
{
    unordered_set<int> s(arr,arr+n);
    int res = 1;
    for(auto x:s)
    {
        if(s.find(x-1)==s.end())
        {
            int curr = 1;
            while(s.find(x+curr)!=s.end())
            {
                curr++;
            }
            res = max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {2,9,4,3,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<longestConsecutiveSubsequence(arr,n);
    return 0;
}
