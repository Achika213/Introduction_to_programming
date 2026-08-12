#include <iostream>

using namespace std;

const int SIZE = 10000;

int minOperations(int n, int memo[])
{
    if (n == 1)
    {
        return 0;
    }

    if (memo[n] != -1)
    {
        return memo[n];
    }

    int best = minOperations(n - 1, memo);

    if (n % 2 == 0)
    {
        int by2 = minOperations(n / 2, memo);

        if (by2 < best)
        {
            best = by2;
        }
    }

    if (n % 3 == 0)
    {
        int by3 = minOperations(n / 3, memo);

        if (by3 < best)
        {
            best = by3;
        }
    }

    memo[n] = 1 + best;

    return memo[n];
}

int main()
{
    int n;
    cin >> n;

    int memo[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        memo[i] = -1;
    }

    cout << minOperations(n, memo) << endl;

    return 0;
}