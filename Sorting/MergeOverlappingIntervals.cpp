#include<iostream>
#include<algorithm>
using namespace std;
struct Interval
{
    int start;
    int end;
};
bool compare(Interval i1, Interval i2)
{
    return i1.start<i2.start;
}
void mergeOverlapping(Interval arr[], int n)
{
    int res = 0;
    for(int i =1;i<n;i++)
    {
        if(arr[i].start<=arr[res].end)
        {
            arr[res].start = min(arr[res].start,arr[i].start);
            arr[res].end = max(arr[res].end,arr[i].end);
        }
        else{
            res++;
            swap(arr[res],arr[i]);
        }
    }
    for(int i =0;i<=res;i++)
    {
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"] ";
    }
}
int main()
{
    Interval arr[] = {{1,3},{2,4},{5,7},{6,8}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    mergeOverlapping(arr,n);
    return 0;
}