//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <cmath>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <cmath>
class Solution
{
public:
    long long sumUnderModulo(long long a, long long b)
    {
        // code here
        long long n = 7 + pow(10, 9);
        long long m = ((a % n + b % n)) % n;
        return m;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.sumUnderModulo(a, b) << endl;
    }
    return 0;
}
// } Driver Code Ends