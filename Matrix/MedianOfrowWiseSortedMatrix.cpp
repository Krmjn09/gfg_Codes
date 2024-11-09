#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int median(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Renaming variables to avoid conflicts with standard min and max functions
    int low = INT_MAX;
    int high = INT_MIN;
    
    // Finding the minimum and maximum elements in the matrix
    for(int i = 0; i < n; i++) {
        if(matrix[i][0] < low)
            low = matrix[i][0];
        if(matrix[i][m-1] > high)
            high = matrix[i][m-1];
    }

    // The desired position of the median
    int desired = (n * m + 1) / 2;

    // Perform binary search on the values (low to high)
    while(low < high) {
        int mid = (low + high) / 2;  // Find the middle element

        int pos = 0;
        // Count how many elements are less than or equal to mid
        for(int i = 0; i < n; i++) {
            pos += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }

        // If position is less than the desired, adjust low to mid + 1
        if(pos < desired)
            low = mid + 1;
        else
            high = mid;
    }

    // The answer is stored in low (or high, since both are the same when the loop ends)
    return low;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5},
                                   {2, 6, 9},
                                   {3, 6, 9}};
    
    cout << median(matrix);
    return 0;
}
