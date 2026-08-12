#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMatrix(int matrix[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int findArea(int matrix[][SIZE], int n, int row, int col)
{
    if (row < 0 || row >= n ||
        col < 0 || col >= n ||
        matrix[row][col] == 0)
    {
        return 0;
    }

    // Отбелязваме клетката като посетена
    matrix[row][col] = 0;

    int size = 1;

    // 8 съседни клетки
    size += findArea(matrix, n, row - 1, col - 1);
    size += findArea(matrix, n, row - 1, col);
    size += findArea(matrix, n, row - 1, col + 1);

    size += findArea(matrix, n, row, col - 1);
    size += findArea(matrix, n, row, col + 1);

    size += findArea(matrix, n, row + 1, col - 1);
    size += findArea(matrix, n, row + 1, col);
    size += findArea(matrix, n, row + 1, col + 1);

    return size;
}

int main()
{
    int n;
    cin >> n;

    static int matrix[SIZE][SIZE];

    inputMatrix(matrix, n);

    int numberOfAreas = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                numberOfAreas++;

                int areaSize = findArea(matrix, n, i, j);

                cout << "Area " << numberOfAreas
                     << ": " << areaSize << endl;
            }
        }
    }

    cout << "Number of areas: "
         << numberOfAreas << endl;

    return 0;
}