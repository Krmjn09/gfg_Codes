#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else if(c=='(')
    return 0;
    else
    return -1;
}
void postfixtoinfix(string s)
{
    stack<string> st;
    int n = s.length();
    string result;

    for(int i = 0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string op1 = "";
            op1+=st.top();
            st.pop();
            string op2 = "";
            op2+=st.top();
            st.pop();
            st.push("(" + op2 + s[i] + op1 + ")");
        }
    }
    cout<<st.top();
}
void infixToPostfix(string s){
    stack<char> st;
    int n = s.length();
    string res;
    for(int i =0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        st.push(s[i]);
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
        }
        else
        {
            while(!st.empty()&& precedence(st.top())>=precedence(s[i]))

            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
            
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<res;
   

}
int main()
{
    // string str  = "a^b+c^d";
    // infixToPostfix(str);
    string str1 = "ab*c+";
    postfixtoinfix(str1);
    return 0;
}