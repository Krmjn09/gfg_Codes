
#include<iostream>
using namespace std;

bool sorted(int arr[], int n){

    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;

}
// { Driver Code Starts.
int main() {
    
    // Testcase input
    int testcases;
    cin >> testcases;
    
    // Looping through all testcases
    while(testcases--){
        int sizeOfArray;
        cin >> sizeOfArray;
        
        int* arr = new int[sizeOfArray];
        
        // Array input
        for(int index = 0; index < sizeOfArray; index++){
            cin >> arr[index];
        }
        if(sorted(arr,sizeOfArray))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}  // } Driver Code Ends