#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    void reverse(string &s,int low,int high)
    {
        while(low<=high)
        {
            swap(s[low],s[high]);
            low++;
            high--;
        }
    }
    
    string reverseWords(string s) {
        int n = s.length();
        int count = 0;
        int low= 0;
        reverse(s,0,n-1);
        int i = 0;
        while(i<n)
        {
            int k = i;
            while(i<n&&s[i]!=' ')
            {
                i++;
            }
            reverse(s,k,i-1);
            i++;

        }

        return s;

        
    }
};
int main()
{
    string s = "the sky is blue";
    Solution obj;
    cout<<obj.reverseWords(s);
    return 0;
}
