#include<iostream>
#include<vector>
using namespace std;
double median(int array1[],int n1,int array2[],int n2 )
{
    if(n1==0)
    {
        if(n2%2==0)
        {
            return (array2[n2/2]+array2[n2/2-1])/2;
        }
        else
        {
            return array2[n2/2];
        }
    }
    if(n1>n2)
    {
        return median(array2,n2,array1,n1);
    }
    int low = 0;
    int high = n1-1;
    int mid;
    mid = (n1+n2+1)/2;
    int i1=0;
    int i2;
    while(low<=high)
    {

        i1 = (low+high)/2;
        i2 = mid - i1;
        if(array2[i2-1]<array1[i1] && array1[i2]>array1[i1-2] )
        {
            return (double)(max(array1[i1-1],array2[i2-1]) + min(array1[i1],array2[i2]))/2;
        }
        else{
            low = i1+1;

        }
    }
    return 0;

}
 int main()
 {
        int array1[] = {30,40,50};
        int array2[] = {5,15,25,30,35,55,65,75,85};
        int n1 = sizeof(array1)/sizeof(array1[0]);
        int n2 = sizeof(array2)/sizeof(array2[0]);
        cout<<median(array1,n1,array2,n2);
        return 0;

 }