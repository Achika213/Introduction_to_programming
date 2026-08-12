#include <iostream>

using namespace std;

const int SIZE = 128;

void permutations(int arr[], int n, int index)
{
    if (index == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
        return;
    }

    for (int i = index; i < n; i++)
    {
        swap(arr[index], arr[i]);

        permutations(arr, n, index + 1);

        swap(arr[index], arr[i]);
    }
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

    permutations(arr, n, 0);

    return 0;
}