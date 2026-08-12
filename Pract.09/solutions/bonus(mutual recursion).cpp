#include <iostream>

using namespace std;

//mutual recursion
bool isEven(int n);
bool isOdd(int n);

bool isEven(int n) {
    if ( n == 0)
        return true;

    return isOdd(n - 1);
}

bool isOdd(int n) {
    if ( n == 0)
        return false;
    return isEven(n - 1);
}

int main() {
    int n;
    cin >> n;

    if (isEven(n)) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}
