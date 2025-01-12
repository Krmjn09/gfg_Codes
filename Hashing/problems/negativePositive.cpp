 
 
#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std; 
 vector <int> findPairs(int arr[], int n) 
    {
        // code here
        unordered_set<int> s;
        vector<int> result;
        for(int i = 0;i<n;i++)
        {
            int x =  arr[i];
            if(s.find(-x)!=s.end())
            {
            if(x>0)
            {
            result.push_back(-x);
            result.push_back(x);
            }
            else
            {
            result.push_back(x);
            result.push_back(-x);
            }
           
            s.erase(-x);
            
            }
            s.insert(x);
            
            
            
        }
        
        return result;
        
    }
int main()
{

    int arr[] = {1,2,3,4,5,-1,-2,-3,-4,-5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = findPairs(arr,n);
    for(int i = 0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;

}