//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    bool Palindrome(string &s,int start,int end)
    {
        //Your code here
        int n= s.length();
        if(start>=end)
        return true;
        return (s[start] == s[end] ) &&  Palindrome(s,start+1,end-1);
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    string n;
	    cin>>n;
        int l = n.length();
        int start = 0;
        int end = l-1;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.Palindrome(n,start,end)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends