//Naive solution
#include <iostream>
using namespace std;
bool isPrime(int i)
{
    int j;
    for (j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}
void primefactors(int n)
{
    int i;
    for (i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;

            while (n % x == 0)
            {
                cout << i << endl;
                x = x * i;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    primefactors(n);
}

