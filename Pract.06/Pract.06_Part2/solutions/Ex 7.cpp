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

bool multiplyMatrix(int matrix1[SIZE][SIZE],
    int matrix2[SIZE][SIZE],
    int result[SIZE][SIZE],
    int rows1, int cols1,
    int rows2, int cols2) {
    if (cols1 != rows2) {
        return false;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return true;
}

int main() {
    int rows1, cols1;
    int rows2, cols2;

    cin >> rows1 >> cols1;
    cin >> rows2 >> cols2;

    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];

    inputMatrix(matrix1, rows1, cols1);
    inputMatrix(matrix2, rows2, cols2);

    if (multiplyMatrix(matrix1, matrix2, result,
                       rows1, cols1, rows2, cols2))
    {
        cout << "Result:" << endl;
        outputMatrix(result, rows1, cols2);
    }
    else
    {
        cout << "The matrices cannot be multiplied." << endl;
    }

    return 0;
}
