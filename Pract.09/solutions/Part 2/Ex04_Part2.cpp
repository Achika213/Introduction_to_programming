#include <iostream>

using namespace std;

const int SIZE = 128;

void printSubsets(int arr[], int n,
                  int index,
                  int current[],
                  int currentSize)
{
    if (index == n)
    {
        cout << "{ ";

        for (int i = 0; i < currentSize; i++)
        {
            cout << current[i] << " ";
        }

        cout << "}" << endl;
        return;
    }

    // 1. Не взимаме arr[index]
    printSubsets(arr, n,
                 index + 1,
                 current,
                 currentSize);

    // 2. Взимаме arr[index]
    current[currentSize] = arr[index];

    printSubsets(arr, n,
                 index + 1,
                 current,
                 currentSize + 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[SIZE];
    int current[SIZE];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printSubsets(arr, n, 0, current, 0);

    return 0;
}