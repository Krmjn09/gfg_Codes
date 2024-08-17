#include<iostream>
using namespace std;
void removeDuplicates(int arr[],int n)
{
    int j=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j-1])
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,2,2,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeDuplicates(arr,n);
    return 0;
}
