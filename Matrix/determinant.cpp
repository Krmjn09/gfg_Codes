#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Declare the determinant function so it can be used in cofactor
int determinant(vector<vector<int>> matrix);

int cofactor(vector<vector<int>> matrix, int p, int q, int n) {
    vector<vector<int>> temp(n - 1, vector<int>(n - 1));
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
    return determinant(temp);  // Now this call to determinant will work
}

int determinant(vector<vector<int>> matrix) {
    int n = matrix.size();
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    int det = 0;
    for (int i = 0; i < n; i++) {
        det += pow(-1, i) * matrix[0][i] * cofactor(matrix, 0, i, n);
    }
    return det;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    
    cout << determinant(matrix) << endl;
    return 0;
}
