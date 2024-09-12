#include<iostream>
using namespace std;
int ans(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int result = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==1)
        {
            if(mid==0||arr[mid-1]==0)
            {
               return n-mid;
            }
            else{
                high = mid-1;
            }
        }
        else{
            low = mid+1;
        }
    }
    return 0;
 
}
int main()
{
    int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ans(arr,n);
    return 0;
}