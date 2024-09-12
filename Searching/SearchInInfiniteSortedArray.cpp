#include<iostream>
using namespace std;
int SearchInInfiniteSortedArray(int arr[],int x)
{
      if(arr[0]==x)
        return 0;
        int i = 1;
        while(arr[i]<x)
        {
            i = i*2;
        }
        if(arr[i]==x)
        return i;
        int low = i/2+1;
        int high = i-1;
         while(low<= high)
         {
            int mid = low + (high-low)/2;
            if(arr[mid]==x)
            return mid;
            else if(arr[mid]>x)
            high = mid - 1;
            else
            low = mid + 1;

         }
            return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x = 10;
    cout<<SearchInInfiniteSortedArray(arr,x);
    return 0;
}
// logic is to find the element in an infinite sorted array
// if the element is at 0th index then return 0
// else initialize i = 1
// while the element is less than x
// i = i*2
// if the element is equal to x then return i
// else initialize low = i/2+1
// high = i-1
// while low<=high
// mid = low + (high-low)/2
// if the element is equal to x then return mid
// if the element is greater than x then high = mid - 1
// else low = mid + 1
// return -1
// time complexity is O(logn)
// space complexity is O(1)
// the output of the code is 9
// the element 10 is present at 9th index
