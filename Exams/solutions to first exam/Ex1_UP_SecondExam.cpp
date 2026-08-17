#include <iostream>

using namespace std;

const int SIZE = 101;

char* compressedString(char* str) {
    int length = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != str[i + 1]) {
            length++;
        }
    }

    char* compressed = new char[length + 1];

    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != str[i + 1]) {
            compressed[j++] = str[i];
        }
    }
    compressed[j] = '\0';

    return compressed;
}

int main() {
    int N;
    cin >> N;

    char** words = new char*[N];

    for (int i = 0; i < N; i++) {
        char str[SIZE];
        cin >> str;

        words[i] = compressedString(str);
    }

    for (int i = N - 1; i >= 0; i--) {
        cout << words[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        delete[] words[i];
    }
    delete[] words;

    return 0;
}