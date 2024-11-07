#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            res[m-1-j][i] = arr[i][j];
        }
    }
    return res;
}
//optimise approach first transpose then interchange columns
void rotateMat(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    //taking transpose
    for(int i =0;i<n;i++)
    {
        for(int j =i+1;j<m;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    //interchanging columns of transpose
    for(int i =0;i<n;i++)
    {
       int low = 0, high = m-1;
       while(low<high)
       {
              swap(arr[low][i],arr[high][i]);
                low++;
                high--;
       }

    }
}
int main()
{
    vector<vector<int>> arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9},
                               };
    vector<vector<int>> res = rotateMatrix(arr);
    for(int i =0;i<res.size();i++)
    {
        for(int j =0;j<res[0].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"optimized approach"<<endl;
    rotateMat(arr);
    for(int i =0;i<arr.size();i++)
    {
        for(int j =0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}