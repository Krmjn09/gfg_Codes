#include<iostream>
#include<climits>
#include<algorithm> // Include the <algorithm> header for the min function
using namespace std;
void Rearrange(int arr[],int n)
{
    int min_index = 0;
    int max_index  = n-1;
    int maximum =  max(arr[min_index], arr[max_index])+1;
    for(int i = 0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i] = ((arr[max_index] % maximum)*maximum) + arr[i];
            max_index--;

        }
        else{
            arr[i] = ((arr[min_index]% maximum)*maximum) + arr[i];
            min_index++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        arr[i] = arr[i]/maximum;
    }


}
int main ()
{
    int arr[6] = {1,2,3,4,5,6};
    Rearrange(arr,6);
    for(int i = 0;i<6;i++)
    {
        cout<< arr[i]<<" ";

    }
    


}