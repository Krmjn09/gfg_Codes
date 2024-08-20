#include <iostream>
#include <climits>
using namespace std;
int FrequenciesInSortedArray(int a[],int n)
{
    int i =1,j=0;
    while(i<=n)
    {
        if(a[i]!=a[j])
        {
            cout<<i-j<<" ";
            j=i;
        }
        i++;
    }
}
// in Unsorted array 
int FrequenciesInUnSortedArray(int a[],int n)
{
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=INT_MIN)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j] = INT_MIN;
                }
            }
            cout<<a[i]<<" "<<count<<endl;
            count = 1;
        }
    }
}

int main()
{
   int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    FrequenciesInSortedArray(arr,n);
    cout<<endl;
    FrequenciesInUnSortedArray(arr,n);
    return 0;
    
}