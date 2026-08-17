#include <iostream>

using namespace std;

const int SIZE = 101;

void input(int matrix[][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void transposeMatrix(int matrix[][SIZE], int transpose[][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void calculateAverages(int matrix[][SIZE], int n) {
    int rowSum = 0;
    int rowCount = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                rowSum += matrix[i][j];
                rowCount++;
            }
        }
    }

    int colSum = 0;
    int colCount = 0;

    for (int j = 0; j < n; j++) {
        if (j % 2 != 0) {
            for (int i = 0; i < n; i++) {
                colSum += matrix[i][j];
                colCount++;
            }
        }
    }

    double evenRowsAverage = (double)rowSum / rowCount;

    double oddColumnsAverage = 0;

    if (colCount > 0) {
        oddColumnsAverage = (double)colSum / colCount;
    }

    cout << "even rows: " << evenRowsAverage << endl;
    cout << "odd columns: " << oddColumnsAverage << endl;
}

int main() {
    int n;
    cin >> n;

    int matrix[SIZE][SIZE];
    input(matrix, n);

    int transpose[SIZE][SIZE];
    transposeMatrix(matrix, transpose, n);

    printMatrix(transpose, n);

    calculateAverages(transpose, n);

    return 0;
}