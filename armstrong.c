#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
  
    for(int i=1;i<=500;i++)
    {
        int sum =0;
        int number = i;
        while(number>0)
        {
            int digit = number%10;
            sum = sum + (digit*digit*digit);
            number = number/10;
        }
        if(sum == i)
        {
            printf("%d\n",i);
        }


    }
    return 0;
}
