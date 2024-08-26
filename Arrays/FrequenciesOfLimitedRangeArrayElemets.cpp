#include <iostream>
#include <vector>
using namespace std;

    // Decrease each element by 1 only if it is within the range [1, n]
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        p++;
        for(int i=0; i<n; i++)
        {
            int ind = (arr[i] % p) - 1;
            if (ind >= n)
                continue;
            int cnt = arr[ind] / p;
            int ele = arr[ind] % p;
            cnt ++;
            arr[ind] = cnt * p + ele;
        }
        for (int i=0; i<n; i++)
            arr[i] /= p;
    }    

int main() {
    vector<int> arr = {4,5,6,7,8};
    int n = arr.size();
    
    frequencyCount(arr, n,8);
    
    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
