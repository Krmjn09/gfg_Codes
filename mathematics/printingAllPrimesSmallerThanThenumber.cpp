// printing all primes smaller than the number
// seive of erastosthenes
#include <iostream>
#include <vector>
using namespace std;
void printprimes(int n)
{
    vector<bool> isPrime(n + 1, true); // its not a function but an array
    int i, j;
    for (i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;
    cout << " enetr a number";
    cin >> n;
    printprimes(n);
}