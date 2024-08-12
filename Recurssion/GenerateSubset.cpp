// CPP program to generate power set
#include<iostream>
using namespace std;

void powerSet(string str, int index = 0, string curr = "")
{
    int n = str.length();
    if(index == n)
    {
        cout << curr<<endl ;
        return;
    }  
   
    powerSet(str,index+1, curr);
     powerSet(str,index+1, curr+str[index]);
}

int main()
{
    string str = "abc";
    powerSet(str);
    return 0;
}
/* another way to write the same code
void subsets(string s, int index ,  string curr, vector<string> &result){
    int l;
    l = s.length();
    if(index== l){
        result.push_back(curr);
        return ;
    }
    subsets(s,index+1,curr,result);
    subsets(s,index+1,curr+s[index],result);

    
}
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> result;
   subsets(s,0, "" , result);
   return result;
   
}
*/