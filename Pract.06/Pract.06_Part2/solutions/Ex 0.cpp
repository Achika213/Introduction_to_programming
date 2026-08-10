#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMatrix(int matrix[][SIZE], int rows, int cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }
}

void outputMatrix(int matrix[][SIZE], int rows, int cols) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
}

void mainDiagonal(int matrix[][SIZE], int rows, int cols) {
    int size = (rows < cols) ? rows : cols;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;
}

void reversedDiagonal(int matrix[][SIZE], int rows, int cols) {
    int size = (rows < cols) ? rows : cols;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][size - 1 - i] << " ";
    }
    cout << endl;
}

void maxNumber(int matrix[][SIZE], int rows, int cols) {
    int max = matrix[0][0];
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (matrix[r][c] >= max) {
                max = matrix[r][c];
            }
        }
    }
    cout << max << endl;
}

void minNumber(int matrix[][SIZE], int rows, int cols) {
    int min = matrix[0][0];
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (matrix[r][c] <= min) {
                min = matrix[r][c];
            }
        }
    }
    cout << min << endl;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix[SIZE][SIZE];

    inputMatrix(matrix, rows, cols);
    outputMatrix(matrix, rows, cols);
    mainDiagonal(matrix, rows, cols);
    reversedDiagonal(matrix, rows, cols);
    maxNumber(matrix, rows, cols);
    minNumber(matrix, rows, cols);
    return 0;
}
