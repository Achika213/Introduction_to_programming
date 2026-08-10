#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMatrix(int matrix[][SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
}

void outputMatrix(int matrix[][SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void plusMatrix(int matrix1[][SIZE],
    int matrix2[][SIZE],
    int result[][SIZE],
    int row,
    int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void minusMatrix(int matrix1[][SIZE],
    int matrix2[][SIZE],
    int result[][SIZE],
    int row,
    int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];

    inputMatrix(matrix1, rows, cols);
    inputMatrix(matrix2, rows, cols);
    plusMatrix(matrix1, matrix2, result, rows, cols);
    minusMatrix(matrix1, matrix2, result, rows, cols);
    outputMatrix(result, rows, cols);
    return 0;
}