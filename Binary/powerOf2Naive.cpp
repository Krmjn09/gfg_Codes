#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << " enter a number";
    cin >> n;
    int r;
    int temp;
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            cout << "number is not a power of 2";
            break;
        }

        n = n / 2;
    }

    return 0;
}