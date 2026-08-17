#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 101;

char* removeDigits(char* str) {
    char* finalStr = new char[strlen(str) + 1];
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            finalStr[j++] = str[i];
        }
    }

    finalStr[j] = '\0';
    return finalStr;
}

int main() {
    int N;
    cin >> N;
    char** words = new char*[N];
    for (int i = 0; i < N; i++) {
        char str[SIZE];
        cin >> str;
        words[i] = removeDigits(str);
    }
    for (int i = 0; i < N; i++) {
        cout << words[i] << endl;
    }
    for (int i = 0; i < N; i++) {
        delete[] words[i];
    }
    delete[] words;
    return 0;
}