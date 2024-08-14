#include<iostream>
#include<vector>
using namespace std;

int getSum(vector<int>& arr, int n, int sum) {
    if (n == 0) 
        return sum == 0 ? 1 : 0;
    
    return getSum(arr, n - 1, sum) + getSum(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum;
    cout << "Enter the sum to check: ";
    cin >> sum;
    
    int result = getSum(arr, n, sum);
    cout << "Number of subsets with the given sum: " << result << endl;
    
    return 0;
}
