#include<iostream>
using namespace std;    
void dutchFlagAlgo(int arr[], int n)
{
    int l =0, h=n-1, mid=l;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[l],arr[mid]);
            mid++;
            l++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[h]);
            h--;
        }
    }
}
int main()
{
    int arr[] = {0,1,2,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    dutchFlagAlgo(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// mid is not incremented when arr[mid] is 0 because we need to check the swapped element
// mid is incremented when arr[mid] is 1 because we don't need to check the swapped element