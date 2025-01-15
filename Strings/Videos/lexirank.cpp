#include<iostream>
#include<string>
using namespace std;
int fact(int n )
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int lexirank(string s)
{
    int res = 1;
    int n = s.length();
    int count[256] = {0};
    int mul = fact(n);
    for(int i = 0;i<n;i++)
    {
        count[s[i]]++;
    }
    for(int i = 1;i<256;i++)
    {
        count[i] += count[i-1];
    }
    for(int i = 0;i<n-1;i++)
    {
        mul = mul/(n-i);
        res = res + count[s[i]-1]*mul;
        for(int j = s[i];j<256;j++)
        {
            count[j]--;
        }
    }
    return res;
}
int main()
{
    string s = "string";
    cout<<lexirank(s)<<endl;
    return 0;
}
