#include<iostream>
using namespace std;
bool triplets(int arr[],int n,int x)
{
    int i = 0;
    while(i<n-2)
    {
       int k = x-arr[i];
         int low = i+1;
         int high = n-1;
         while(low<=high)
         {
            if(arr[low]+arr[high]==k)
            {
                return true;
            }
            else if(arr[low]+arr[high]>k)
            {
                high--;
            }
            else
            {
                low++;
            }
         }
            i++;
    }
    return false;
}
int main()
{
    int arr[] = {2,3,4,8,9,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 40;
    if(triplets(arr,n,x))
    {
        cout<<"Triplets found";
    }
    else
    {
        cout<<"Triplets not found";
    }
    return 0;
}