#include <iostream>
using namespace std;
int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0) // bit is 1
            res = res * x;
        x = x * x;
        n = n / 2;
    }
    return res;
}
int main()
{
    int x, n;
    cout << "Enter the coefficient ";
    cin >> x;
    cout << " enter the exponent ";
    cin >> n;
    int r = power(x, n);
    cout << r;
    return 0;
}