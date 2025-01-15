#include<iostream>
#include<string>
#include<vector>
using namespace std;
int leftmostrepeating(string s)
{
    int n  = s.length();
    char count[256]={0};
    for(int i =0;i<n;i++)
    {
        count[s[i]]++;
    }
    for(int i =0;i<n;i++)
    {
        if(count[s[i]]>1)
        return i;
    }
    return -1;

}
// optimized approach 
int optimizedleftmostrepeating(string s)
{
     bool visited[256] ;
        fill(visited,visited+256,false);
        int res = -1;
        for(int i= s.length()-1;i>=0;i--)
        {
            if(visited[s[i]])
            res = i;
            else
            visited[s[i]] = true;
        }

        return res;
} 
// time complexity is O(n) and space complexity is o(1)
int main()
{
    string s = "geeksforgeeks";
    cout<<leftmostrepeating(s);
    cout<<endl;
    cout<<optimizedleftmostrepeating(s);

    return 0;
}