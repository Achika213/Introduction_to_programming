#include <iostream>

using namespace std;

const int SIZE = 128;

bool canMakePalindrome(int arr[], int left, int right, int n)
{
    if (left >= right)
    {
        return true;
    }

    if (arr[left] == arr[right])
    {
        return canMakePalindrome(arr, left + 1, right - 1, n);
    }

    if (n == 0)
    {
        return false;
    }

    return canMakePalindrome(arr, left + 1, right, n - 1) ||
           canMakePalindrome(arr, left, right - 1, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int size;
    cin >> size;

    int arr[SIZE];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (canMakePalindrome(arr, 0, size - 1, n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}