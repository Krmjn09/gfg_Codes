//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int> result;
       int  temp = N;
    
        while(N>0)
        {
            result.push_back(N);
            N = N - 5;
               
        }
        while(N<=temp)
        {
            result.push_back(N);
            N = N + 5;
        }
        return result;
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends