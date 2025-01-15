#include <iostream>
#include <string>
#include <vector>

using namespace std;
int lengthOfLongestSubstring(string s) {

    vector<int> prev(256,-1); // this stores the index of the character
    int n = s.length();
    int res = 0;
    int l = 0;
    int r = 0;
    int len = 0;
    while(r<n)
    {
        if(prev[s[r]]!=-1)
        {
           if(prev[s[r]]+1>l) // this condition is used to check if the character is already present in the substring
           {
               l = prev[s[r]]+1;
           }
        }
        len = r-l+1;
        res = max(res,len);
        prev[s[r]] = r;// this stores the index of the character
        r++;



    }

    return res;



}
int main()
{
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}