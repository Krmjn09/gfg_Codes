#include<iostream>
using namespace std;
int TrappedWater(int a[], int n)
{
int* left = new int[n];
int* right = new int[n];
    left[0] = a[0];
    for(int i=1;i<n;i++)
    {
        left[i] = max(left[i-1],a[i]);
    }
    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1],a[i]);
    }
    int water = 0;
    for(int i=0;i<n;i++)
    {
        water += min(left[i],right[i])-a[i];
    }   
    return water;
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
    cout<<TrappedWater(arr,n);
    return 0;
}