#include <iostream>

using namespace std;

const int SIZE = 128;

void inputMaze(int maze[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> maze[i][j];
        }
    }
}

bool hasPath(int maze[][SIZE],
             int rows, int cols,
             int x1, int y1,
             int x2, int y2)
{
    if (x1 < 0 || x1 >= rows ||
        y1 < 0 || y1 >= cols)
    {
        return false;
    }

    if (maze[x1][y1] != 0)
    {
        return false;
    }

    if (x1 == x2 && y1 == y2)
    {
        return true;
    }

    maze[x1][y1] = 2;

    return hasPath(maze, rows, cols, x1 - 1, y1, x2, y2) ||
           hasPath(maze, rows, cols, x1 + 1, y1, x2, y2) ||
           hasPath(maze, rows, cols, x1, y1 - 1, x2, y2) ||
           hasPath(maze, rows, cols, x1, y1 + 1, x2, y2);
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    static int maze[SIZE][SIZE];

    inputMaze(maze, rows, cols);

    int x1, y1;
    int x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if (hasPath(maze, rows, cols, x1, y1, x2, y2))
    {
        cout << "Path exists." << endl;
    }
    else
    {
        cout << "No path." << endl;
    }

    return 0;
}