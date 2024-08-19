#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void Leaders(int arr[],int n)
{
   
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]>curr_leader)
        {
            curr_leader = arr[i];
            cout<<curr_leader<<" ";
        }
    }
// but it will print the leaders in reverse order
// so we will store the leaders in a vector and then print the vector in reverse order
//     vector <int> v;
//     v.push_back(curr_leader);
//     for(int i = n-2;i>=0;i--)
//     {
//         if(arr[i]>curr_leader)
//         {
//             curr_leader = arr[i];
//             v.push_back(curr_leader);
//         }
//     }
//     for(int i = v.size()-1;i>=0;i--)
//     {
//         cout<<v[i]<<" ";
//     }

}
int main()
{
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Leaders(arr,n);
    return 0;
}