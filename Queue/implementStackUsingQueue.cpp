#include<iostream>
#include<queue>
using namespace std;
struct Stack{
    queue<int> q1,q2;
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int pop()
    {
        if(q1.empty())
        return -1;
        return q1.front();
       
         
    }
    void push(int x){
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl; // 30
    cout<<s.top()<<endl; // 20
    cout<<s.size()<<endl; // 2
    return 0;
}