#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string str1,string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if(n1!=n2)
    return false;
    int count[256]={0};
    for(int i =0;i<n1;i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i =0;i<256;i++)
    {
        if(count[i]!=0)
        return false;
    }
    return true;
}
int main()
{
    string str1 = "listen";
    string str2 = "silent";
    cout<<isAnagram(str1,str2);
    return 0;
}