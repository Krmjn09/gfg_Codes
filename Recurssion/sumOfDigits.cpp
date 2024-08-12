//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int sumOfDigits(int n)
    {
        //Your code here
        if(n ==0)
        return 0;
        return sumOfDigits(n/10)+n%10;
        
        
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends