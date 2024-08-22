#include<iostream>
using namespace std;
int MaximumLengthEvenOddSubarray(int a[],int n)
{
    int result = 1;
    int count =1;
   
for(int i = 1;i<n;i++)
{
   if(a[i]%2==0 && a[i-1]%2!=0 || a[i]%2!=0 && a[i-1]%2==0)
{
    count++;
    if(count>result)
    {
        result = count;
    }  
}
   else
    count = 1;
}
    return result;
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
    cout<<MaximumLengthEvenOddSubarray(arr,n);
    return 0;
}
