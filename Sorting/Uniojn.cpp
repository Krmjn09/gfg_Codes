#include<iostream>
using namespace std;
void UnionArray(int arr1[], int arr2[],int n, int m)
{
    int i = 0;
    int j = 0;
    while(i<n && j<m)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1])
        {
            j++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(i==0 || arr1[i]!=arr1[i-1])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
    }
    while(j<m)
    {
        if(j==0 || arr2[j]!=arr2[j-1])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }

}
int main()
{
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {5,15,25,35,45};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    UnionArray(arr1,arr2,n,m);
    return 0;

}