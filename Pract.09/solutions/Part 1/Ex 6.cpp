#include <iostream>

using namespace std;
const int SIZE = 128;

void insertSorted(int arr[], int n , int x) {
    if (n == 0 || arr[n-1] <= x) {
        arr[n] = x;
        return;
    }

    arr[n] = arr[n-1];

    insertSorted(arr, n-1, x);
}

int main() {
    int n;
    cin >> n;

    int arr[SIZE];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    insertSorted(arr, n, x);

    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}