//{ Driver Code Starts
#include<iostream>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        int* temp = new int[n];
        
        
        for(int i = 0; i<n;i++)
        {
            temp[i] = arr[i];
            
        }
         
        for(int i = 0; i<n;i++)
        {
           arr[i] =  temp[temp[i]] ;
            
        }

        
        delete[] temp; // Free the dynamically allocated memory
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long* A = new long long[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        cout<<"Modified array is \n";
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends