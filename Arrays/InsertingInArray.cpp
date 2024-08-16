#include<iostream>
using namespace std;

int inserting(int arr[], int cap, int n, int ele, int pos) {
    if (n == cap) {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--) {
        arr[i + 1] = arr[i];
    }
    arr[idx] = ele;
    return(n+1);
}

int main() {
    int arr[5] = {1, 2, 3, 4};
    int cap = 5;
    int n = 4;
    int x = 80;
    int pos = 1;
  int r  = inserting(arr, cap, n, x, pos);
    for (int i = 0; i < r; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
