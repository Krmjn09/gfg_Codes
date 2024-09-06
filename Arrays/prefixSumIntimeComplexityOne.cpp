#include<iostream>
using namespace std;

class PrefixSum{
    public:
        int *prefixSum;
        int n;
        PrefixSum(int arr[], int n){
            this->n = n;
            prefixSum = new int[n];
            prefixSum[0] = arr[0];
            for(int i=1; i<n; i++){
                prefixSum[i] = prefixSum[i-1] + arr[i];
            }
        }
        int getSum(int l, int r){
            if(l == 0){
                return prefixSum[r];
            }
            return prefixSum[r] - prefixSum[l-1];
        }
};

int main(){
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    PrefixSum prefixSum(arr, n);
    cout<<prefixSum.getSum(1, 3)<<endl;
    cout<<prefixSum.getSum(0, 3)<<endl;
    cout<<prefixSum.getSum(2, 5)<<endl;
    return 0;
}