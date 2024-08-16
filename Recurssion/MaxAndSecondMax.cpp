#include <iostream>
#include <vector>
#include <climits>
using namespace std;    
class Solution{
  public:
    vector<int> largestAndSecondLargest(int n, int arr[]) {
    int max = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max2 = max;
            max = arr[i];
        } else if (arr[i] != max && arr[i] > max2) {
            max2 = arr[i];
        }
    }
    if (max2 == INT_MIN) {
        max2 = -1;
    }
    vector<int> output = {max, max2};
    return output;
}
};

//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
        int* arr = new int[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}
// } Driver Code Ends