#include<iostream>
using namespace std;
int maxProfit(int arr[],int n) {
    int profit = 0;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            profit += arr[i]-arr[i-1];
    }
    return profit;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxProfit(arr,n);
    return 0;
}