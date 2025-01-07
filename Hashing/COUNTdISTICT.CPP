#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    //unordered_set<int>s(arr,arr+n);
    return s.size();
}

int main()
{
    int arr[] = {10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
}
