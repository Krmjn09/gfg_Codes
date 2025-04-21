#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d = {1, 2, 3, 4, 5};
    d.push_back(10);
    d.push_front(20);
    for(auto x: d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<d.back()<<endl; // 10
    d.pop_back();

    cout<<d.back()<<endl; // 5
    d.pop_front();
    cout<<d.size();
    cout<<endl; 
    auto it  = d.begin();
    it;
    d.insert(it, 100); // insert 100 after the first element
    for(auto x: d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    it = d.end();
 
    d.insert(it,300);
    for (auto x : d)
    {
        cout << x << " ";
    }
    return 0;
}