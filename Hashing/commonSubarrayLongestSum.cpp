#include<iostream>
#include<unordered_map>
using namespace std;
int CommonSpanWithSameSum(int arr1[], int arr2[], int n)
{
    int* temp = new int[n];
    for(int i =0;i<n;i++)
    {
        temp[i] = arr1[i]-arr2[i];
       
    }
    int prefix_sum = 0;
    int res = 0;
    unordered_map<int,int> m;
     for (int i = 0;i<n;i++)
        {
            prefix_sum+=temp[i];
            if(prefix_sum ==0)
            res= i+1;
            if(m. find(prefix_sum)!=m.end())
            {
                res = max(res,i-m[prefix_sum]);
            }
            if(m.find(prefix_sum)==m.end())
            {
                m[prefix_sum] = i;
            }

        }
        return res;



}
int main()
{
    int arr1[] = {1,1,1,1,1,1};
    int arr2[] = {0,0,0,0,0,0};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<CommonSpanWithSameSum(arr1,arr2,n);
    return 0;
}