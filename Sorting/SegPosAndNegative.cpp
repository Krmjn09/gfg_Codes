#include<iostream>
using namespace std;
void segregatePosAndNeg(int arr[], int n)
{
   int l = 0;
   int h = n;
   int i = l-1;
   int j = h;
   while(true)
   {
    do{
        i++;
    }while(arr[i]<0);
    do{
        j--;
    }while(arr[j]>=0);
    if(i>=j)
    {
        return ;
    }
    swap(arr[i],arr[j]);
   }


}
int main()
{
    int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregatePosAndNeg(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}