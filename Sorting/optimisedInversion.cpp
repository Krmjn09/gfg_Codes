#include<iostream>
#include<vector>
using namespace std;
int CountMerge(int arr[],int l,int m,int r)
{
    int n1= m-l+1;
    int n2 = r-m;
    vector<int> left(n1);
    vector<int> right(n2);
    for(int i =0;i<n1;i++){
        left[i]= arr[l+i];
    }
     for(int i =0;i<n2;i++){
        right[i]= arr[m+1+i];
    }
    int res = 0;
    int i=0,j=0,k=l;
    while(i<n1&& j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
            res+= n1-i;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;

}
int CountInv(int arr[], int l, int r)
{
    int res=0;
    if(l<r)
    {
        int m  = (l+r)/2;
        res+= CountInv(arr, l,m);
        res+= CountInv(arr,m+1,r);
        res+= CountMerge(arr,l,m,r);
    }
    return res;
}
int main()
{
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Number of inversions are"<<endl;
    
    cout<<CountInv(arr,0,n-1);
    cout<<endl;
    
    return 0;
}
