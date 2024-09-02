#include<iostream>
using namespace std;
bool SubarrayWithGivenSum(int arr[],int n, int sum)
{
    int s=0,e=0;
    int curr_sum = 0;

    for(int i = 0;i<n;i++)
    {
         curr_sum += arr[i];
        while(sum<curr_sum)
        {
            curr_sum  = curr_sum - arr[s];
            s++;    
        }
     
        if(curr_sum==sum)
        {
            
            return true;
        }
    }
    return false;


}
int main()
{
    int arr[] = {1,4,20,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
    cout<<SubarrayWithGivenSum(arr,n,sum);
    return 0;
}