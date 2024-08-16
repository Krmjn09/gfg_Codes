//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <string>
#include <vector>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> result;
vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void print_subset(int arr[], int n, string temp, int i) {
    if (i == n) {
        result.push_back(temp);
        return;
    }
    for (int j = 0; j < keys[arr[i]].size(); j++) {
        print_subset(arr, n, temp + keys[arr[i]][j], i + 1);
    }
}


vector<string> possibleWords(int a[], int N) {
    result.clear(); // Clear previous results
    print_subset(a, N, "", 0);
    return result;
}
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	vector<int> a(N); //declare the vector
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	vector <string> res = obj.possibleWords(&a[0], N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends