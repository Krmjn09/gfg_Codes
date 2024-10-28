#include<iostream>
#include<climits>
using namespace std;
    int isFeasible(int arr[],int n, int k, int ans)
    {
        int students = 1;
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>ans)
            {
                students++;
                sum = arr[i];
            }
            if(students>k)
            {
                return false;
            }
        }
        return true;
    }

    
int minimumPages(int arr[],int n , int k)
{
    int sum = 0;
    int maximum= INT_MIN;
    for(int i = 0;i<n;i++)
    {
        maximum = max(arr[i],maximum);
        sum+=arr[i];
    }
    //this is the range from maximum to sum 

    int low= maximum;
    int high = sum;
    while(low<=high)
    {
        int  mid = (low+high)/2;
        if(isFeasible(arr,n,k,mid))
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;

        }
    }
    return low;

}
int main()
{
    int arr[] = {10,20,30,5,3,2,1,9};
  int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<minimumPages(arr,n,k);
    return 0;
}