#include <iostream>

using namespace std;

const int SIZE = 101;

void input(int matrix[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void mirror(int matrix[SIZE][SIZE],
            int mirrored[SIZE][SIZE],
            int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mirrored[i][cols - 1 - j] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOddRows(int matrix[SIZE][SIZE], int rows, int cols) {
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < cols; j++) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

double averageEvenCols(int matrix[SIZE][SIZE], int rows, int cols) {
    int sum = 0;
    int count = 0;

    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    return (double)sum / count;
}

int main() {
    int n;
    cin >> n;

    int matrix[SIZE][SIZE];
    int mirrored[SIZE][SIZE];

    input(matrix, n, n);

    mirror(matrix, mirrored, n, n);

    printMatrix(mirrored, n, n);

    cout << sumOddRows(mirrored, n, n) << endl;
    cout << averageEvenCols(mirrored, n, n) << endl;

    return 0;
}