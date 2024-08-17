#include<iostream>
#include<vector>
using namespace std;
vector<int> reversedArray(int n, vector <int> &arr){
    int low= 0;
    int high = n-1;
    vector<int> rev(n);
    while(low<=high){
        rev[low] = arr[high];
        rev[high] =arr[low];
        low++;
        high--;
        
    }
    return rev;


    // we could also have used swapping to resuce the space
    /*
    while(low<=high){
        temp = rev[low]
        rev[low] = arr[high];
        rev[high] =temp;
        low++;
        high--;
        
    }
    */
}
int main(){
    vector <int > arr = {2,3,90,67};
    vector<int> rev = reversedArray(4,arr);
    for(int i= 0; i<4;i++){
        cout<< rev[i]<<" ";
    }
    return 0;
}
