#include<iostream>
#include<vector>
using namespace std;
void spiralForm(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int top = 0, bottom = n-1, left = 0, right = m-1;
    if(n==1)
    {
        for(int i=0;i<m;i++)
        cout<<arr[0][i]<<" ";
    }
    else if(m==1)
    {
        for(int i=0;i<n;i++)
        cout<<arr[i][0]<<" ";
    }
    else{
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<arr[top][i]<<" ";
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                cout<<arr[i][right]<<" ";
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    cout<<arr[bottom][i]<<" ";
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    cout<<arr[i][left]<<" ";
                }
                left++;
            }


        }
    }

}
int main()
{
    vector<vector<int>> arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9},
                               };
    spiralForm(arr);
    return 0;
}