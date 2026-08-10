#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMatrix(int matrix[SIZE][SIZE],
    int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void outputMatrix(int matrix[SIZE][SIZE],
    int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpoteMatrix(int matrix[SIZE][SIZE],
    int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[SIZE][SIZE];
    inputMatrix(matrix, rows, cols);
    transpoteMatrix(matrix, rows, cols);
    outputMatrix(matrix, rows, cols);

    return 0;
}