#include <iostream>

using namespace std;

bool contains(int n, int k) {
    if (n % 10 == k) {
        return true;
    }

    if (n < 10) {
        return false;
    }

    return contains(n/10, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << contains(n, k) << endl;

    return 0;
}
