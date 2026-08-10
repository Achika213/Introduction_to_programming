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

void findXAndMultuply(int matrix[SIZE][SIZE],
    int rows, int cols, int x) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == x) {
                matrix[i][j] *= 10;
            }
        }
    }

}

int main() {
    int rows, cols, x;
    cin >> rows >> cols >> x;
    int matrix[SIZE][SIZE];
    inputMatrix(matrix, rows, cols);
    findXAndMultuply(matrix, rows, cols, x);
    outputMatrix(matrix, rows, cols);

    return 0;
}