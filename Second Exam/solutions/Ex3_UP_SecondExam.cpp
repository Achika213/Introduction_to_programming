#include <iostream>

using namespace std;

const int SIZE = 101;

void encrypt(char* str, int k) {
    if (*str == '\0') {
        return;
    }

    if (*str >= 'a' && *str <= 'z' ) {
        *str = 'a' + (*str - 'a' + k) % 26;
    }

    encrypt(str + 1, k);
}

int main() {
    char str[SIZE];
    int k;

    cin.getline(str,SIZE);
    cin >> k;

    encrypt(str, k);
    cout << str << endl;
    return 0;
}