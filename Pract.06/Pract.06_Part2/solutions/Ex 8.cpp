#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMatrix(int matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void outputMatrix(int matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}

void rotateNinty(int matrix[][SIZE],
              int result[][SIZE],
              int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][rows - 1 - i] = matrix[i][j];
        }
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    static int matrix[SIZE][SIZE];
    static int result[SIZE][SIZE];

    inputMatrix(matrix, rows, cols);

    rotateNinty(matrix, result, rows, cols);

    outputMatrix(result, cols, rows);

    return 0;
}