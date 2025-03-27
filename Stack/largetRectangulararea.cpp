#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largestRectangularArea(int arr[], int n)
{
    stack<int> s;
    int max_area = 0;
    int tp;
    int area_with_top;
    int i = 0;
    while(i<n)
    {
        if(s.empty() || arr[s.top()]<=arr[i])
        {
            s.push(i++);
        }
        else
        {
            tp = s.top();
            s.pop();
            area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            if(max_area < area_with_top)
            {
                max_area = area_with_top;
            }
        }
    }
    while(!s.empty())
    {
        tp = s.top();
        s.pop();
        area_with_top = arr[tp] * (s.empty() ? i : i - s.top() - 1);
        if(max_area < area_with_top)
        {
            max_area = area_with_top;
        }
    }
    return max_area;
}
int main()
{
    int arr[] = {6,2,5,4,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largestRectangularArea(arr,n);
    return 0;
}