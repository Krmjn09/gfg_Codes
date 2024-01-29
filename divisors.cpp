#include <iostream>
using namespace std;
// void divisors(int n)
// {
//     int i;
//     for (i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//             if (i != n / i)
//                 cout << n / i << endl;
//         }
//     }
// }

//  but if you want in sorted order then
void divisors(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << endl;
    }
}

int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    divisors(n);
}