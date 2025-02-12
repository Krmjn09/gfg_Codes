#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class StockSpanner {
    stack<pair<int,int>> s;
    int ind = -1;
    public:
        StockSpanner() {
            ind = -1;
            while (!s.empty()) {
                s.pop();
            }
        }
        int next (int price) {
        ind++;
        while(!s.empty() && s.top().first <= price)
        {
            s.pop();
        }
       int ans = s.empty() ? ind + 1 : ind - s.top().second;
        s.push({price,ind});
        return ans;
    }
};
int main()
{
    StockSpanner s;
    cout<<s.next(100)<<endl;
    cout<<s.next(80)<<endl;
    cout<<s.next(60)<<endl;
    cout<<s.next(70)<<endl;
    cout<<s.next(60)<<endl;
    cout<<s.next(75)<<endl;
    cout<<s.next(85)<<endl;
    return 0;
}

