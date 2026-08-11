#include <iostream>

using namespace std;

const int SIZE = 128;

bool isPalindrome(const char str[], int left, int right) {
    if (left >= right) {
        return true;
    }

    if (str[left] != str[right]) {
        return false;
    }

    return isPalindrome(str, left+1, right-1);
}

int main() {
    char str[SIZE];
    cin >> str;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    if (isPalindrome(str, 0, length - 1)) {
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
    return 0;
}