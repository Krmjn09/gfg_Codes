//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(int arr[], int n) {

        // Your code here
        // Remove the line 'int n = arr.size();'
        long long sum = 0;
        long long leftsum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        for (int i = 0; i < n; i++)
        {
            sum = sum - arr[i];
            if (sum == leftsum)
                return i+1;
            leftsum += arr[i];
        }
        return -1;

    }
};

//{ Driver Code Starts.

int main() {
    int arr[] = {1, 0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Solution ob;
    cout << ob.equilibriumPoint(arr, n) << endl;

   
}
// } Driver Code Ends