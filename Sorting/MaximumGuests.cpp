#include<iostream>
#include<algorithm>
using namespace std;

int maximumguests(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i = 1;
    int j = 0;
    int res = 1;
    int curr = 1;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res = max(res,curr);
    }
    return res;
}
int main()
{
    int arr[] = {1,2,10,5,5};
    int dep[] = {4,5,12,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maximumguests(arr,dep,n)<<endl;
    return 0;
}