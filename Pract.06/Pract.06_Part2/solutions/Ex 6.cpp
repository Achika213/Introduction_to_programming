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

bool isMagicSquare(int matrix[SIZE][SIZE],
    int rows, int cols) {
    if (rows != cols) {
        return false;
    }
    int targetSum = 0;

    for (int j = 0; j < cols; j++) {
        targetSum += matrix[0][j];
    }

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;

        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum != targetSum) {
            return false;
        }
    }

    for (int j = 0; j < cols; j++)
    {
        int colSum = 0;

        for (int i = 0; i < rows; i++)
        {
            colSum += matrix[i][j];
        }

        if (colSum != targetSum)
        {
            return false;
        }
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        mainDiagonalSum += matrix[i][i];
    }
    if (mainDiagonalSum != targetSum) {
        return false;
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < rows; i++) {
        secondaryDiagonalSum += matrix[i][cols - 1 - i];
    }
    if (secondaryDiagonalSum != targetSum) {
        return false;
    }
    return true;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    static int matrix[SIZE][SIZE];

    inputMatrix(matrix, rows, cols);

    if (isMagicSquare(matrix, rows, cols))
    {
        cout << "The matrix is a magic square." << endl;
    }
    else
    {
        cout << "The matrix is not a magic square." << endl;
    }

    return 0;
}