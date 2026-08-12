#include <iostream>

using namespace std;

const int SIZE = 100;

long long fib(int n, long long memo[])
{
    if (n <= 1)
    {
        return n;
    }

    if (memo[n] != -1)
    {
        return memo[n];
    }

    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);

    return memo[n];
}

int main()
{
    int n;
    cin >> n;

    long long memo[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        memo[i] = -1;
    }

    cout << fib(n, memo) << endl;

    return 0;
}