#include<iostream>
using namespace std;
void movezero(int arr[],int n)
{
    int j =0;
    for(int i= 0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
}
int main(){
    int arr[] = {1,2,0,4,3,0,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);
    return 0;
}