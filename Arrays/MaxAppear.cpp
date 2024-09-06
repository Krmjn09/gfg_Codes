#include<iostream>
using namespace std;
class MaxAppear{
    public:
        int maxAppear(int L[], int R[], int n){
            int freq[1000] = {0};
            for(int i=0; i<n; i++){
                freq[L[i]]++;
                freq[R[i]+1]--;
            }
            int maxFreq = freq[0];
            int res = 0;
            for(int i=1; i<1000; i++){
                freq[i] += freq[i-1];
                if(maxFreq < freq[i]){
                    maxFreq = freq[i];
                    res = i;
                }
            }
            return res;
        }
       
};
int main(){
    int L[] = {1, 2, 5, 15};
    int R[] = {5, 8, 7, 18};
    int n = sizeof(L)/sizeof(L[0]);
    MaxAppear maxAppear;
    cout<<maxAppear.maxAppear(L, R, n)<<endl;
    return 0;
}