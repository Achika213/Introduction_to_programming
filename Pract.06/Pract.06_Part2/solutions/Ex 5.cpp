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

bool isMatrixTriangular(int matrix[SIZE][SIZE],
    int rows, int cols) {
    if (rows != cols) {
        return false;
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    static int matrix[SIZE][SIZE];

    inputMatrix(matrix, rows, cols);

    if (isMatrixTriangular(matrix, rows, cols))
    {
        cout << "The matrix is triangular." << endl;
    }
    else
    {
        cout << "The matrix is not triangular." << endl;
    }
    return 0;
}