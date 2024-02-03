#include <iostream>
using namespace std;
// for O(1) complexity
class Binary
{
public:
    int table[256];
    void initialize()
    {
        table[0] = 0;
        int i;
        for (i = 1; i < 256; i++)
            table[i] = table[i & (i - 1)] + 1;
    }
    int count(int n)
    {
        return table[n & 255] + table[(n >> 8) & 255] + table[(n >> 16) & 255] + table[(n >> 24)];
    }
};
int main()
{
    Binary obj;
    int n;
    cout << " enter a number";
    cin >> n;
    int r;

    obj.initialize();
    r = obj.count(n);
    cout << r;

    return 0;
}