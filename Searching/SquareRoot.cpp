#include<iostream>
using namespace std;
int squareRoot(int x)
{
    int low= 1;
    int high = x;
    int ans = -1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int midsq = mid*mid;
        if(midsq == x)
            return mid;
        else if(midsq > x)
        high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
            
        }
    }
    return ans;
}
int main()
{
    int x = 11;
    cout<<squareRoot(x);
    return 0;
}

// logic is to find the square root of a number using binary search
// if the square of mid is equal to x then return mid
// if the square of mid is greater than x then high = mid - 1
// if the square of mid is less than x then low = mid + 1
// return ans
// ans is the square root of x
// time complexity is O(logn)
// space complexity is O(1)