#include <iostream>

using namespace std;

const int SIZE = 20;

int findRightmost(int arr[], int i)
{
    if (i == 0)
    {
        return -1;
    }

    if (arr[i] > (arr[i - 1] + arr[i + 1]) / 2.0)
    {
        return i;
    }

    return findRightmost(arr, i - 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[SIZE];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n < 3)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << findRightmost(arr, n - 2) << endl;

    return 0;
}