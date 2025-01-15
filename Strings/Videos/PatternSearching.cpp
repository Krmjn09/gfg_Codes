#include<iostream>
#include<string>
#include<vector>
using namespace std;
void patternSearching(string s, string t)
{
    int n = s.length();
    int m = t.length();
    for(int i =0;i<n;i++)
    {
        int k = i;
        int j =0;
        if(s[k]==t[j])
        {
            while(j<m && k<n)
            {
                if(s[k]==t[j])
                {
                    j++;
                    k++;
                }
                else
                {
                    break;
                }
            }
            if(j==m)
            {
                cout<<"Pattern found at index "<<i<<endl;
            }
        }


    }

}
int main()
{
    string s = "AABAACAADAABAABA";
    string t = "AABA";
    patternSearching(s,t);
    return 0;
}
