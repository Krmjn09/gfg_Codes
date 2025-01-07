#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m)
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
   for(int i=0;i<n;i++)
   {
         if(s.find(arr1[i])!=s.end())
         {
              cout<<arr1[i]<<" ";
              s.erase(arr1[i]);
         }
    }

  
}
int main()
{
    int arr1[] = {10,10,10,20,20,30};
    int arr2[] = {10,10,10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    intersection(arr1,arr2,n,m);
    return 0;
}
