#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(string str)
{
    int n = str.length();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        if(str[low]!=str[high])
        return false;
        low++;
        high--;
    }
    return true;
}
int main()
{
    string str = "kriti";
    cout<<isPalindrome(str);
    return 0;
}