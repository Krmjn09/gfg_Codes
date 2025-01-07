#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
bool pairSum(int arr[],int n,int sum)
{
   unordered_set<int> s;
 
   for(int i=0;i<n;i++)
   {
    int x= sum-arr[i];
    if(s.find(x)!=s.end())
    {
        return true;
    }
    s.insert(arr[i]);

   }
   
    return false;
}
int main()
{
    int arr[] = {10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=20;
    cout << pairSum(arr,n,sum);
    return 0;
}