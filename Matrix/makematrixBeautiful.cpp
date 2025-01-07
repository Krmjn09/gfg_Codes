#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;
int findMinOpeartion(vector<vector<int> > arr, int n)
    {
        // code here 
        vector<int> sum(n,0);
                vector<int> col(n,0);
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                sum[i] += arr[i][j];
                col[i]+= arr[j][i];
                
            }
            maxi = max(sum[i],max(maxi,col[i]));
        }
          
        int operation =0;
        for(int i=0;i<n;i++ )
        {
            if(sum[i]!=maxi)
            {
                operation+=(maxi-sum[i]);
                
            }
        }
        


        return operation;
    } 
int main()
{
    vector<vector<int> > arr = {{1, 2, 3},
                                {4, 2, 3},
                                {3, 2, 1}};
    int n = 3;
    cout<<findMinOpeartion(arr,n);
    return 0;
}