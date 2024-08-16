#include<iostream>
using namespace std;
int equilibrium(int arr[], int n)
{
    int sum = 0;
    int leftsum= 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int i = 0; i < n; i++)
    {
        sum =  sum - arr[i];
        if(sum==leftsum)
        return i;
        leftsum+= arr[i];
    }
    return -1;


}
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, n);
    return 0;
}