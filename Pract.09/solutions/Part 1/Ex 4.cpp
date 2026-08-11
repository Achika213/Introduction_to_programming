#include <iostream>

using namespace std;

const int SIZE = 10;

bool isIncreasing(int arr[], int n) {
    if (n <= 1) {
        return true;
    }

    if (arr[n - 2] > arr[n - 1]) {
        return false;
    }

    return isIncreasing(arr, n - 1);
}

int main() {
    int n;
    cin >> n;

    int arr[SIZE];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isIncreasing(arr, n)) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
    
    return 0;
}