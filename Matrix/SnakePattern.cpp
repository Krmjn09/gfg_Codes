#include<iostream>
using namespace std;
void snakepattern(int arr[][4], int m, int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
        }
    }
    
}
int main()
{
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    snakepattern(arr, 4, 4);
    return 0;
}

