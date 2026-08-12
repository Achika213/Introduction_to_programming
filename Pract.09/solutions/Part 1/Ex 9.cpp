#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    return year % 400 == 0 ||
          (year % 4 == 0 && year % 100 != 0);
}

void printLeapYears(int year, int n)
{
    if (n == 0)
    {
        return;
    }

    if (isLeapYear(year))
    {
        cout << year << " ";

        printLeapYears(year + 1, n - 1);
    }
    else
    {
        printLeapYears(year + 1, n);
    }
}

int main()
{
    int year;
    int n;

    cin >> year >> n;

    printLeapYears(year + 1, n);

    return 0;
}