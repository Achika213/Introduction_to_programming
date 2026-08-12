#include <iostream>

using namespace std;

const int SIZE = 128;
const int INF = 1000000;

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

int shortestPath(int maze[][SIZE],
                 int rows, int cols,
                 int x1, int y1,
                 int x2, int y2)
{
    if (x1 < 0 || x1 >= rows ||
        y1 < 0 || y1 >= cols)
    {
        return INF;
    }

    if (maze[x1][y1] != 0)
    {
        return INF;
    }

    if (x1 == x2 && y1 == y2)
    {
        return 0;
    }

    // visited
    maze[x1][y1] = 2;

    int up = shortestPath(maze, rows, cols,
                          x1 - 1, y1, x2, y2);

    int down = shortestPath(maze, rows, cols,
                            x1 + 1, y1, x2, y2);

    int left = shortestPath(maze, rows, cols,
                            x1, y1 - 1, x2, y2);

    int right = shortestPath(maze, rows, cols,
                             x1, y1 + 1, x2, y2);

    // връщаме клетката обратно,
    // за да може друг път да мине през нея
    maze[x1][y1] = 0;

    int minPath = up;

    if (down < minPath)
        minPath = down;

    if (left < minPath)
        minPath = left;

    if (right < minPath)
        minPath = right;

    if (minPath == INF)
    {
        return INF;
    }

    return 1 + minPath;
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

    int result = shortestPath(maze, rows, cols,
                              x1, y1, x2, y2);

    if (result == INF)
    {
        cout << "No path." << endl;
    }
    else
    {
        cout << "Shortest path: " << result << endl;
    }

    return 0;
}