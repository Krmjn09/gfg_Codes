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
    else if(c==')')
    return 0;
    else
    return -1;
}
void reverse(string &s)
{
    int n = s.length();
    for(int i = 0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
}
void infixToPrefix(string s)
{
    stack<char> st;
    int n = s.length();
    string res;
    int i = n-1;
    while(i>=0)
    {
       if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
       {
        res+=s[i];
       }
       else if(s[i]==')')
       st.push(s[i]);
       else if(s[i]=='(')
       {
        while(!st.empty()&& st.top()!=')')
        {
            res+= st.top();
            st.pop();
        }
       }
       else
       {
        while(!st.empty()&&precedence(st.top())>=  precedence(s[i]))
        {
            res+=st.top();
            st.pop();
        }
        st.push(s[i]);

       }
         i--;   

    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res);
    cout<<res;
}
void prefixtoInfix(string s)
{
    stack<string> st;
    int n = s.length();
    string res;
    int i = n-1;
    while(i>=0)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            st.push(string(1,s[i]));
        }
        else{
            string op1 = "";
            op1 += st.top();
            st.pop();
            string op2 = "";
            op2 += st.top();
            st.pop();
            st.push("(" + op1 + s[i] + op2 + ")");

        }
        i--;
    }
    cout<<st.top();
}
int main()
{
    string s ="x+y*z";
    infixToPrefix(s);
    cout<<endl;
    string s1 = "+*xyz";
    prefixtoInfix(s1);


    return 0;
}