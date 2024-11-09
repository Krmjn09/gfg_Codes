#include<iostream>
#include<vector>

using namespace std;
bool search(vector<vector<int>>& matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i = 0, j = m-1;
    while(i<n && j>=0)
    {
        if(matrix[i][j]==target)
        {
            return true;
        }
        else if(matrix[i][j]>target)
        j--;
        else
        i++;
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},
                                   {10,11,16,20},
                                   {23,30,34,60}
                                  };
    int target = 3;
    cout<<search(matrix,target);
    return 0;
}