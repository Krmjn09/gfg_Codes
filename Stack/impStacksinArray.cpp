#include<iostream>

using namespace std;

class TwoStacks {
    int *arr;
    int size;
    int top1, top2;
public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        } else {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
    }

    int pop1() {
        if (top1 != -1) {
            int x = arr[top1];
            delete &arr[top1];
            top1--;
            return x;
        } else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
    }

    int pop2() {
        if (top2 != size) {
            int x = arr[top2];
            delete &arr[top2];
            top2++;
            return x;
        } else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
    }
    int size1()
    {
        return top1+1;
    }
    int size2()
    {
        return size-top2;
    }

    void printArray() {
        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    TwoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    ts.printArray();

    cout << "Popped element from stack1 is " << ts.pop1() << endl;
    // ts.push2(40);
    // ts.printArray();
    cout << "Popped element from stack2 is " << ts.pop2() << endl;

    ts.printArray();
    cout << "Size of stack1 is " << ts.size1() << endl;
    cout << "Size of stack2 is " << ts.size2() << endl;

    return 0;
}
