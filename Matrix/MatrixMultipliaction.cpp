#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> matrixMulti(vector<vector<int>> &arr, vector<vector<int>> &brr)
{
    int n = arr.size();
    int m = arr[0].size();
    int n1 = brr.size();
    int m1 = brr[0].size();
      vector<vector<int>> ans(n,vector<int>(m1,0));
    if(m!=n1)
    {
        return vector<vector<int>>();
    }
    else{
      
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m1;j++)
            {
                for(int k = 0;k<m;k++)
                {
                    ans[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9},
                               };
    vector<vector<int>> brr = {{1,2},
                                {3,4},
                                {5,6},
                               };
                        
    vector<vector<int>> ans = matrixMulti(arr,brr);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}