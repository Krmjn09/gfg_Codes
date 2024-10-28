#include<iostream>
using namespace std;
int countInversions(int arr[], int n)
{
    int i =0;
     int j = i+1;
    int count = 0;
    int k = 0;
    while(i<n&&j<n)
    {
        
        if(arr[i]<arr[j])
        {
           j++;
        }
        else
        {
            count++;
            j++;
        }
        if(j==n)
        {
            i++;
            j = i+1;
        }


        
    }
    return count;
}
int main()
{
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countInversions(arr,n);
    cout<<endl;
    
    return 0;
}
