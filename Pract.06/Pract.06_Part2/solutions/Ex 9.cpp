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

void printSpiral(int matrix[][SIZE], int rows, int cols)
{
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right)
    {
        // top row: left -> right
        for (int j = left; j <= right; j++)
        {
            cout << matrix[top][j] << " ";
        }
        top++;

        // right column: top -> bottom
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        // bottom row: right -> left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        // left column: bottom -> top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    cout << endl;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int matrix[SIZE][SIZE];

    inputMatrix(matrix, rows, cols);

    cout << "Spiral: ";
    printSpiral(matrix, rows, cols);

    return 0;
}
