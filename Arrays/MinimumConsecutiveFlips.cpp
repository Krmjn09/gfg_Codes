#include<iostream>
using namespace std;
void MinimunConsecutiveFlips(int arr[],int n)
{
 
   
    for(int i = 1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"From "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
        }
        
    }
    // now we have to check for the last element
    if(arr[n-1]!=arr[0])
    {
        cout<<n-1<<endl;
    }

   
}
int main()
{
    int arr[] = {1,0,0,0,1,0,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    MinimunConsecutiveFlips(arr,n);
    return 0;
} 