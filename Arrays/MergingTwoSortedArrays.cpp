#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[], int m, int n)
{
    int i= 0 ,j=0, k=0;
    int* arr3 = new int[m + n];
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
        arr3[k]=arr1[i];
        i++;
        k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }



    }
    while(i<m)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);
    return 0;
}