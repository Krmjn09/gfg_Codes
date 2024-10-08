#include<iostream>
using namespace std;
bool pair1(int arr[],int n,int x)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
      if(arr[low]+arr[high]==x)
      return true;
      if(arr[low]+arr[high]>x)
      {
        high--;
      }
      else
      low++;
    }
    return false;

}
int main()
{
    int arr[] = {2,4,8,9,11,12,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    if(pair1(arr,n,x))
    {
        cout<<"Pair found";
    }
    else
    {
        cout<<"Pair not found";
    }
    return 0;
}