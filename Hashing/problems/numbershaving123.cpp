#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> filterByDigits(const vector<int>& arr) {
        vector<int> result;
        int n = arr.size();
        for(int i=0;i<n;i++ )
        {
                                    bool flag =true;
    

            
            if(arr[i]==1||arr[i]==2||arr[i]==3)
            {
            result.push_back(arr[i]);
            }
            else
            {
                
                int k= arr[i];
                while(k!=0)
                {
                    if(k%10!=1&&k%10!=2&&k%10!=3)
                    {
                    flag =false;
                    break;
                    }
                    k=k/10;
                }
                    if(flag==true)
                    {
                    result.push_back(arr[i]);

                    }
                    
                }
            }
        
        
        return result;
    }

int main()
{
    vector<int> arr = {2,9,4,3,10};
    vector<int> res = filterByDigits(arr);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    return 0;
}