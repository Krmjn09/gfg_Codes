#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Hash {
    int bucket; // Number of buckets
    vector<list<int>> table; // Pointer to an array containing buckets

public:
    Hash(int b); // Constructor

    void insertItem(int key);
    void deleteItem(int key);
    bool searchItem(int key);
    void displayHash();
};

Hash::Hash(int b) {
    this->bucket = b;
    table.resize(b);
}

void Hash::insertItem(int key) {
    int index = key % bucket;
    table[index].push_back(key);
}

void Hash::deleteItem(int key) {
    int index = key % bucket;
    table[index].remove(key);
}

bool Hash::searchItem(int key) {
    int index = key % bucket;
    for (auto x : table[index])
        if (x == key)
            return true;
    return false;

}

void Hash::displayHash() {
    for (int i = 0; i < bucket; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}

int main() {
    int keys[] = {15, 11, 27, 8, 12};
    int n = sizeof(keys) / sizeof(keys[0]);

    Hash h(7); // 7 is the number of buckets in the hash table

    for (int i = 0; i < n; i++)
        h.insertItem(keys[i]);

    h.displayHash();

    h.deleteItem(12);
    cout << "After deleting 12:" << endl;
    h.displayHash();

    if (h.searchItem(15))
        cout << "15 is present in the hash table." << endl;
    else
        cout << "15 is not present in the hash table." << endl;

    return 0;
}