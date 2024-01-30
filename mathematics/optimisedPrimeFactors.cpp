#include <iostream>
using namespace std;
void primefactors(int n) // more optimised with complexity root
{
    int i;
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << endl;
        n = n / 3;
    }
    for (i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 3)
        cout << n;
}
// void primefactors(int n)
// {
//     int i;
//     if (n <= 1)
//         return;
//     for (i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             cout << i << endl;
//             n = n / i;
//         }
//     }
//     if (n > 1)
//         cout << n;
// }
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    primefactors(n);
}
