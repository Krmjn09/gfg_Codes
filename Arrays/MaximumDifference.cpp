#include<iostream>
#include<climits>
using namespace std;
// this is the naive solution
// int maxDifference(int a[], int n)
// {
//     int result = a[1] - a[0];
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j = i+1;j<n;j++)
//         {
//             result = max(a[j]-a[i],result);

//         }
//     }
//     return result;
// }

// better solution with theta n 
int maxDifference(int a[], int n)
{
    int res = a[1] - a[0];
    int minElement = a[0];
    for(int i = 1;i<n;i++)
    {
        res = max(res, a[i]-minElement);
        minElement = min(a[i],minElement);

    }
    return res;


}

int main()
{
    int arr[7] = {2,3,11,16,4,8,1};
    int r = maxDifference(arr,7);
    cout<< r;
    return 0;
}