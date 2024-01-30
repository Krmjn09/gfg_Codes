#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
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