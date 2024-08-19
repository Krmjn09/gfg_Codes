#include<iostream>
#include<climits>
using namespace std;
void reverse(int arr[],int start,int end)
{
    while(start<end)
   {
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}
void LeftRotateD(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    cout<<"Array after rotating by "<<d<<" places is: ";
    LeftRotateD(arr,n,d);
    return 0;
}