#include<iostream>
#include<string>
using namespace std;
bool RotateString(string s,string g)
{
    if(s.length()!=g.length())
    {
        return false;
    }
    return((s+s).find(g)!= string::npos);

}
int main()
{
    string s = "abcde";
    string g = "cdeab";
    cout<<RotateString(s,g)<<endl;
    return 0;
}
