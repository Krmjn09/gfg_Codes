#include<iostream>
#include<vector>
using namespace std;
int median(int array1[],int n1,int array2[],int n2 )
{
  int i = 0;
  int j =0;
  vector<int> v;
  while(i<n1&&j<n2)
  {
    if(array1[i]<array2[j])
    {
      v.push_back(array1[i]);
      i++;
    }
    else
    {
      v.push_back(array2[j]);
      j++;
    }
  }
  while(i<n1)
  {
    v.push_back(array1[i]);
    i++;
  }
    while(j<n2)
    {
        v.push_back(array2[j]);
        j++;
    }
    int n = v.size();
    if(n%2==0)
    {
        return (v[n/2]+v[n/2-1])/2;
    }
    else
    {
        return v[n/2];
    }


}
int main()
{
    int array1[] = {1,3};
    int array2[] = {2};
    int n1 = sizeof(array1)/sizeof(array1[0]);
    int n2 = sizeof(array2)/sizeof(array2[0]);
    cout<<median(array1,n1,array2,n2);
    return 0;
}