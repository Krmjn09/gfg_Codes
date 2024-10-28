#include<iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int n, int m  )
{
 for(int i = 0;i<n;i++)
 {
     if(i>0 && arr1[i]==arr1[i-1])
     {
         continue;
     }
     for(int j = 0;j<m;j++)
     {
         if(arr1[i]==arr2[j])
         {
             cout<<arr1[i]<<" ";
             break;
         }
}
 }
}
void optimisedIntersection(int arr1[], int arr2[], int n, int m)
{
    int i =0;
    int j = 0;
    while(i<n && j<m)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
 
    int arr1[] = {10,10,50};
    int arr2[] = {20,20,20,40,50};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    cout<< "naive solution"<<endl;
    cout<< "intersection of two arrays is"<<endl;
    intersection(arr1,arr2,n,m);
    cout<<endl<< "efficient solution"<<endl;
    optimisedIntersection(arr1,arr2,n,m);
    return 0;

}