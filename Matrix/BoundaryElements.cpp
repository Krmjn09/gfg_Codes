#include<iostream>
using namespace std;
void printBoundaryElements(int arr[][4], int m, int n)
{
   if(n==1)
   {
        for(int i=0;i<m;i++)
        cout<<arr[0][i]<<" ";
        return;
   }
    else if(m==1)
    {
        for(int i=0;i<n;i++)
        cout<<arr[i][0]<<" ";
        return;
    }
    else{
        for(int i=0;i<m;i++)
        cout<<arr[0][i]<<" ";
        for(int i=1;i<n;i++)
        cout<<arr[i][m-1]<<" ";
        for(int i=m-2;i>=0;i--)
        cout<<arr[n-1][i]<<" ";
        for(int i=n-2;i>0;i--)
        cout<<arr[i][0]<<" ";
    }
    
}
int main()
{
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    printBoundaryElements(arr, 4, 4);
    return 0;
}