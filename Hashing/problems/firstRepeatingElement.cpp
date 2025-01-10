 
 #include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

 
 
 int firstRepeated(vector<int> &arr) {
        // code here
        int n = arr.size();
       unordered_map<int, int> m;
       int c =-1;
       for(int i =0;i<n;i++)
       {
           if(m.find(arr[i])!=m.end())
           {
              if(c==-1 || m[arr[i]]<c)
              {
                  c =m[arr[i]];
              }
           }
           else
           {
               m[arr[i]] = i+1;
           }
       }
       return c;
    }

int main()
{
    vector<int> arr = {1,5,3,4,3,5,6};
    cout<<firstRepeated(arr);
    return 0;
}