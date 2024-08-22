#include<iostream>
using namespace std;
int MaximumConsecutiveOnes(int arr[],int n)
{
    int result = 0;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            result = max(result,count);
        }
        else
        {
            count = 0;
        }
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
    cout<<MaximumConsecutiveOnes(arr,n);
    return 0;
}