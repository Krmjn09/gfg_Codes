 #include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
void frequenciesOfArrayElement(int arr[], int n)
{
   unordered_map<int,int> m;
   
   for(int i =0;i<n;i++)
   {
    m[arr[i]]++;
   }
    for(auto x:m)
    {
         cout<<x.first<<" "<<x.second<<endl;
    }


}
int main()
{
    int arr[] = {10,10,10,20,20,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequenciesOfArrayElement(arr, n);
    return 0;
}
