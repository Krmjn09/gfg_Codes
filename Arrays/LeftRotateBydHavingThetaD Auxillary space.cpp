#include<iostream>
#include<vector>
using namespace std;
void leftRotateByD(int arr[],int n,int d)
{
    vector <int> temp(d);
    for(int i = 0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    int i = 0;
    while((d+i)<n)
    {
        arr[i]=arr[d+i];
        i++;
    }
    for(int j=0;j<d;j++)
    {
        arr[n-d+j]=temp[j];
    }
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

 int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    cout<<"Array after rotating by "<<d<<" places is: ";
    leftRotateByD(arr,n,d);
    return 0;

 }