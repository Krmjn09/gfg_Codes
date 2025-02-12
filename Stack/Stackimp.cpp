#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class mystack
{
    vector<int> v;
    int top1;
    int size1;
    public:
    mystack(int size)
    {
        size1 = size;
        top1 = -1;
        v.resize(size);
    }
    void push(int x)
    {
        if(top1 == size1-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top1++;
        v[top1] = x;
    }
    void pop()
    {
        if(top1 == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top1--;
    }
    int top()
    {
        if(top1 == -1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return v[top1];
    }
    int size()
    {
        return top1+1;
    }
    bool empty()
    {
        return top1 == -1;
    }
};
int main()
{
    mystack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0; 
}