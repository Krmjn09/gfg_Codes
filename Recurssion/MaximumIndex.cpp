#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int MaxIndex(vector<int> &arr,int n){
    vector <int> leftmin(n);
    vector <int> rightmax(n);
    leftmin[0]= arr[0];
    rightmax[n-1] =  arr[n-1];
    for(int i=1;i<n;i++){
        leftmin[i] =  min(leftmin[i-1],arr[i]);
    }
    for(int i = n-1;i>=0;i--){
        rightmax[i]= max(rightmax[i+1],arr[i]);
    }
    int i=0,j=0,maxDiff=0;
    while(i<n&& j<n){
        if(leftmin[i]<=rightmax[j]){
            maxDiff= max(maxDiff,j-i);
            j++;

        }
        else{   i++;}
     
    }
    return maxDiff;
    

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = MaxIndex(arr,n);
    cout<<ans<<endl;
    return 0;
}