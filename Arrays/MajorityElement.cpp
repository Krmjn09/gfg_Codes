#include<iostream>
using namespace std;
int MajorityElement(int a[],int n)
{
    int count = 1;
    int res = 0;
    for(int i = 1;i< n;i++)
    {
        if(a[res]==a[i])
        {
            count ++;
        }
        else{
            count--;
        }
        if(count == 0)
        {
            res = i;
            count = 1;
        }

    }
    count = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
        
    }
    if(count>n/2)
        {
            return res;
        }
        else
        {
            return -1;
        }
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
    int r = MajorityElement(arr,n);
    cout<<r;
    return 0;
}
