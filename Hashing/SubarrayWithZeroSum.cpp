#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
bool SubarraywithZeroSum(int arr[], int n )
{
    int prefix_sum=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
                  prefix_sum+=arr[i];

        
        if(s.find(prefix_sum)!=s.end())
        {
            return true;
        }

        if(prefix_sum==0)
        {
            return true;
        }
            s.insert(prefix_sum);
        
    }
                return false;

}
int main()
{
    int arr[] = {10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SubarraywithZeroSum(arr,n);
    return 0;
}