#include <iostream>
using namespace std;
struct kstack
{
    int n;
    int *arr;
    int *top;
    int *next;
    int free;
    int k;
    int cap;
    kstack(int k1, int n)
    {
        free = 0;
        cap = n;
        k = k1;
        arr = new int[cap];
        top = new int[k];
        next = new int[cap];
        for (int i = 0; i < k; i++)

            top[i] = -1;
        for (int i = 0; i < cap - 1; i++)

            next[i] = i + 1;
        next[cap - 1] = -1;
    }
    void push(int x, int sn)
    {
        if (free == -1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        int i = free;
        free = next[i];
        next[i] = top[sn];
        top[sn] = i;
        arr[i] = x;
    }
    int pop(int sn)
    {
        if (top[sn] == -1)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        int i = top[sn];
        top[sn] = next[i];
        next[i] = free;
        free = i;
        return arr[i];
    }

};
int main()
{
    int k = 3, n = 10;
    kstack ks(k, n);
    ks.push(15, 2);
    ks.push(45, 2);
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl;
    return 0;
}
