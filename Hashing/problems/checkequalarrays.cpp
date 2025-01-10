#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

bool checkEqual(vector<int>& a, vector<int>& b) {
    // If sizes are different, they cannot be equal
    if (a.size() != b.size()) {
        return false;
    }

    // Use a hash map to count frequencies of elements in 'a'
    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }

    // Decrease frequencies based on elements in 'b'
    for (int num : b) {
        if (freq.find(num) == freq.end() || freq[num] == 0) {
            return false; // Element not found or frequency mismatch
        }
        freq[num]--;
    }
// || freq[num] == 0   why this condition is used because if the element is not present in the map then it will return false and if the frequency of the element is 0 then also it will return false
    // If all checks pass, the vectors are equal
    return true;
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {5, 4, 3, 2, 1};
    if (checkEqual(a, b)) {
        cout << "Vectors are equal";
    } else {
        cout << "Vectors are not equal";
    }
    return 0;
}
