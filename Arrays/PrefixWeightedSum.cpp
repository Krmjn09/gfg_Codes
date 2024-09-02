#include <iostream>
using namespace std;

int PrefixWeightedSum(int arr[], int n, int l, int r) {
    // Prefix sum array to store the weighted prefix sums
    int* prefixSum = new int[n];
    int* simplePrefixSum = new int[n];

    // Initialize the first elements of the prefix arrays
    prefixSum[0] = 1 * arr[0];
    simplePrefixSum[0] = arr[0];

    // Compute the prefix sums
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + (i + 1) * arr[i];
        simplePrefixSum[i] = simplePrefixSum[i - 1] + arr[i];
    }

    int result;

    if (l == 0) {
        result = prefixSum[r];
    } else {
        // Calculate the prefix weighted sum over the range [l, r]
        result = prefixSum[r] - prefixSum[l - 1] - l * (simplePrefixSum[r] - simplePrefixSum[l - 1]);
    }

    delete[] prefixSum;
    delete[] simplePrefixSum;

    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << PrefixWeightedSum(arr, n, 2, 3) << endl;  // Example output: 27
    return 0;
}
