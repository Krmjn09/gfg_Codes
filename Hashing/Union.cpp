#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
int unionArray(int arr1[], int arr2[], int n , int m )
{
    unordered_set<int> s(arr1,arr1+n);
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    return s.size();

}
int main()
{
    int arr1[] = {10,10,10,20,20,30};
    int arr2[] = {10,10,10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    cout << unionArray(arr1,arr2,n,m);
    return 0;
}