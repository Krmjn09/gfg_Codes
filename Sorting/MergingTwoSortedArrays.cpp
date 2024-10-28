#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
int c[m+n];
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
  
for(int k = i;k<n;k++)
        {
            cout<<arr1[k]<<" ";
        }
    
for(int k = j;k<m;k++)
        {
            cout<<arr2[k]<<" ";
        }
    
    
}
 int main()
 {
        int arr1[] = {10,20,30,40,50};
        int arr2[] = {5,15,25,35,45};
        int n = sizeof(arr1)/sizeof(arr1[0]);
        int m = sizeof(arr2)/sizeof(arr2[0]);
        merge(arr1,arr2,n,m);
        return 0;

 }