// printing all primes smaller than the number
// seive of erastosthenes
#include <iostream>
#include <vector>
using namespace std;
void printprimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
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