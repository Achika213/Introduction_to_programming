#include <iostream>

using namespace std;

//ex 1
//int charToDigit(char symbol)
//{
//    if (symbol >= '0' && symbol <= '9')
//    {
//        return symbol - '0';
//    }
//
//    return symbol - 'A' + 10;
//}
//
//char digitToChar(int digit)
//{
//    if (digit <= 9)
//    {
//        return digit + '0';
//    }
//
//    return digit - 10 + 'A';
//}
//
//long long toDecimal(const char number[], int fromBase)
//{
//    long long result = 0;
//
//    for (int i = 0; number[i] != '\0'; i++)
//    {
//        int digit = charToDigit(number[i]);
//        result = result * fromBase + digit;
//    }
//
//    return result;
//}
//
//void fromDecimal(long long number, int toBase, char result[])
//{
//    if (number == 0)
//    {
//        result[0] = '0';
//        result[1] = '\0';
//        return;
//    }
//
//    char reversed[100];
//    int count = 0;
//
//    while (number > 0)
//    {
//        int digit = number % toBase;
//        reversed[count++] = digitToChar(digit);
//        number /= toBase;
//    }
//
//    int j = 0;
//
//    for (int i = count - 1; i >= 0; i--)
//    {
//        result[j++] = reversed[i];
//    }
//
//    result[j] = '\0';
//}
//
//void convertBase(const char number[],
//    int fromBase,
//    int toBase,
//    char result[])
//{
//    long long decimal = toDecimal(number, fromBase);
//    fromDecimal(decimal, toBase, result);
//}
//
//int main()
//{
//    char number[100];
//    char result[100];
//
//    int fromBase;
//    int toBase;
//
//    cin >> number >> fromBase >> toBase;
//
//    convertBase(number, fromBase, toBase, result);
//
//    cout << result << endl;
//
//    return 0;
//}


//ex 2
//int countOnes(unsigned int n)
//{
//    int count = 0;
//
//    while (n != 0)
//    {
//        if ((n & 1) == 1)
//        {
//            count++;
//        }
//
//        n >>= 1;
//    }
//
//    return count;
//}


//ex 3
//unsigned int clearRightmostOne(unsigned int n)
//{
//    return n & (n - 1);
//}


//ex 4
//unsigned int getLastKBits(unsigned int n, int k)
//{
//    if (k <= 0)
//    {
//        return 0;
//    }
//
//    if (k >= 32)
//    {
//        return n;
//    }
//
//    unsigned int mask = (1u << k) - 1;
//    return n & mask;
//}


//ex 5
//bool containsBinary(unsigned int n, unsigned int k)
//{
//    int bitsCount = 0;
//    unsigned int temp = k;
//
//    while (temp > 0)
//    {
//        bitsCount++;
//        temp >>= 1;
//    }
//
//    unsigned int mask = (1u << bitsCount) - 1;
//
//    while (n > 0)
//    {
//        if ((n & mask) == k)
//        {
//            return true;
//        }
//
//        n >>= 1;
//    }
//
//    return false;
//}


//ex 6
//int findSingleNumber(const int arr[], int size)
//{
//    int result = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        result ^= arr[i];
//    }
//
//    return result;
//}


//ex 7
//void printSubsets(const int arr[], int n)
//{
//    unsigned int subsetsCount = 1u << n;
//
//    for (unsigned int mask = 0; mask < subsetsCount; mask++)
//    {
//        cout << "[";
//
//        bool first = true;
//
//        for (int i = 0; i < n; i++)
//        {
//            if (mask & (1u << i))
//            {
//                if (!first)
//                {
//                    cout << ", ";
//                }
//
//                cout << arr[i];
//                first = false;
//            }
//        }
//
//        cout << "] ";
//    }
//}


//ex 8
//unsigned int extractBits(unsigned int x, int m, int n)
//{
//    if (n <= 0 || m - n + 1 < 0)
//    {
//        return 0;
//    }
//
//    unsigned int mask = (1u << n) - 1;
//    int shift = m - n + 1;
//
//    return (x >> shift) & mask;
//}


//ex 9
//unsigned int encode(unsigned int number, unsigned int key)
//{
//    return number ^ key;
//}
//
//unsigned int decode(unsigned int code, unsigned int key)
//{
//    return code ^ key;
//}


//ex 10
//unsigned int setBit(unsigned int n, int p, int b)
//{
//    unsigned int mask = 1u << p;
//
//    if (b == 1)
//    {
//        return n | mask;
//    }
//
//    return n & ~mask;
//}


//ex 11
//unsigned int toggleBit(unsigned int n, int p)
//{
//    return n ^ (1u << p);
//}