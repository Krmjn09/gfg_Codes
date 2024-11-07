#include<iostream>
using namespace std;
int Transpose(int arr[][4], int m , int n)
{
    for(int i =0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//optimized approach

int main()
{
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    Transpose(arr, 4, 4);
    return 0;
}