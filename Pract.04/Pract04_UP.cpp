#include <iostream>
#include <cmath> // ex 16, 17, 18, 19

using namespace std;

//SEMINAR

//ex 1
//int ReverseNum(unsigned num) {
//    int reverseNum = 0;
//
//    while (num != 0)
//    {
//        int digit = num % 10;
//        reverseNum = reverseNum * 10 + digit;
//        num = num / 10;
//    }
//
//    return reverseNum;
//}

//ex 2
//bool isPalindrom(int num) {
//    if (num < 0)
//    {
//        cout << "Incorrect num" << endl;
//        return 0;
//    }
//
//    int original = num;
//    int reversed = 0;
//
//    while (num > 0)
//    {
//        int digit = num % 10;
//        reversed = reversed * 10 + digit;
//        num /= 10;
//    }
//
//    return original == reversed;   
//}

//ex 3
//bool isSort(int num) {
//    if (num < 0)
//    {
//        cout << "Incorrect num" << endl;
//        return 0;
//    }
//
//    if (num < 10)
//    {
//        return true;
//    }
//
//    bool ascending = true;
//    bool descending = true;
//
//    int last = num % 10;
//    num /= 10;
//
//    while (num > 0)
//    {
//        int current = num % 10;
//
//        if (current < last)
//        {
//            descending = false;
//        }
//
//        if (current > last)
//        {
//            ascending = false;
//        }
//
//        last = current;
//        num /= 10;
//    }
//
//    return ascending || descending;
//}

//int main() {
    //test ex 1
    //int num = 255;
    //cout << ReverseNum(num) << endl;

    //test ex 2
    //int n;
    //cin >> n;
    //if (isPalindrom(n))
    //{
    //    cout << "P";
    //}
    //else
    //{
    //    cout << "Not P";
    //}

    //test ex 3
//    int n;
//    cin >> n;
//
//    cout << boolalpha << isSort(n) << endl;
//
//    return 0;
//}

//PRACTICUM

//ex 1
//int sum(int a, int b) {
//    return a + b;
//}

    //test ex 1
    //int a, b;
    //cin >> a >> b;
    //cout << sum(a, b) << endl;

//ex 2
//bool isEven(int num) {
//    return num % 2 == 0 ? true : false;
//}

    //test ex 2 
    //int num;
    //cin >> num;
    //cout << boolalpha << isEven(num);

//ex 3
//bool isPositive(int posNum) {
//    return posNum > 0 ? true : false;
//}

    //test ex 3
    //int num;
    //cin >> num;
    //cout << isPositive(num);

//ex 4
//bool isNegative(int negNum) {
//    return negNum < 0 ? true : false;
//}

    //test ex 4
    //int num;
    //cin >> num;
    //cout << isNegative(num);

//ex 5
//int abs(int num) {
//    return num >= 0 ? num : -num;
//}
    //test ex 5
    //int num;
    //cin >> num;
    //cout << abs(num);

//ex 6
//double fabs(double num) {
//    const double epsilon = 0.000001;
//    return num >= 0.0 ? num : -num;
//}
    //test ex 6
    //int num;
    //cin >> num;
    //cout << fabs(num);

//ex 7
//void print(char s, int n) {
//    for (int i = 0; i < n; i++)
//    {
//        cout << s;
//    }
//}
    //test ex 7
    //int n;
    //char s;
    //cin >> n >> s;
    //print(s, n);

//ex 8
//bool isCapitalLetter(char s) {
//    return 'A' <= s && s >= 'Z';
//}
//
//bool checkSymbol(char S)
//{
//    return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');
//}
    //test ex 8
    //char s;
    //cin >> s;
    //cout <<checkSymbol(s) << " " << isCapitalLetter(s);

//ex 9
//bool isNumberInInterval(int num, int lowerBound, int upperBound)
//{
//    return lowerBound <= num && num <= upperBound;
//}
    //test ex 9
    //int n, l, u; cin >> n >> l >> u;
    //cout << isNumberInInterval(n >> l >> u);

//ex 10
//long long pow(int num, unsigned N)
//{
//    long long result = 1;
//
//    for (unsigned i = 0; i < N; i++) {
//        result *= num;
//    }
//
//    return result;
//}
    //test ex 10
    //int n;
    //unsigned p;
    //cin >> n >> p;
    //cout << pow(n, p);

//ex 11
//int calculate(int a, int b, char action = '+')
//{
//    switch (action)
//    {
//    case '+': return a + b;
//
//    case '-': return a - b;
//
//    case '*': return a * b;
//
//    case '/':
//        if (b == 0) {
//            return 0;
//        }
//        return a / b;
//
//    case '%':
//        if (b == 0) {
//            return 0;
//        }
//        return a % b;
//
//    default:
//        return a + b;
//    }
//}
    //test ex 11
    //int a, b;
    //char act;
    //cin >> a >> b >> act;
    //cout << calculate(a, b, act);

//ex 12
//bool isNumberInInterval(int num, int lowerBound, int upperBound)
//{
//    return lowerBound <= num && num <= upperBound;
//}
//
//int askUser(int from, int to)
//{
//    int number;
//    cout << "Enter a number in range [" << from << ", " << to << "]: ";
//    while (cin >> number)
//    {
//        if (isNumberInInterval(number, from, to)) {
//            return number;
//        }
//        cout << "Invalid input. Try again: ";
//    }
//    return from;
//}
    // test ex 12
    //int f, t;
    //cin >> f >> t;
    //askUser(f, t);

////ex 13
//void printBinary(unsigned num) {
//    if (num == 0)
//    {
//        cout << "0";
//        return;
//    }
//
//    unsigned long long binary = 0;
//    unsigned long long multiplier = 1;
//
//    while (num > 0)
//    {
//        binary += (num % 2) * multiplier;
//        multiplier *= 10;
//        num /= 2;
//    }
//
//    cout << binary << endl;
//}
    // test ex 13
    //unsigned num;
    //cin >> num;
    //printBinary(num);

//ex 14
//int gcd(int x, int y) {
//    while (x != y)
//    {
//        if (x > y)
//        {
//            x -= y;
//        }
//        else
//        {
//            y -= x;
//        }
//    }
//
//    return x;
//}
// 
//int main()
//{
//    int a, b, c, d;
//
//    cout << "Enter a, b, c, d: ";
//    cin >> a >> b >> c >> d;
//
//    if (!cin || a < 1 || b < 1 || c < 1 || d < 1) {
//        cout << "Error! Invalid input.\n";
//        return 1;
//    }
//
//    int gcdAB = gcd(a, b);
//    cout << "gcd(" << a << ", " << b << ") = " << gcdAB << "\n";
//
//    int gcdCD = gcd(c, d);
//    cout << "gcd(" << c << ", " << d << ") = " << gcdCD << "\n";
//
//    cout << "gcd(" << a << ", " << b << ", " << c << ", " << d << ") = " << gcd(gcdAB, gcdCD) << "\n";
//
//    return 0;
//}

//ex 15
//const int LowerBound = 100;
//const int UpperBound = 100000;
//
//bool isValidInput(int number) {
//    return number >= LowerBound && number <= UpperBound;
//}
//
//int getValidNumber() {
//    int number;
//    do {
//        std::cout << "Enter a number in range [" << LowerBound << ", " << UpperBound << "]: ";
//        std::cin >> number;
//        if (!isValidInput(number)) {
//            std::cout << "Invalid input. Try again.\n";
//        }
//    } while (!std::cin || !isValidInput(number));
//
//    return number;
//}
//
//int findNearestPowerOfTwo(int number) {
//    int powerOfTwo = 1;
//    int lower = 1, higher = 2;
//
//    while (powerOfTwo <= number) {
//        lower = powerOfTwo;
//        powerOfTwo *= 2;
//        higher = powerOfTwo;
//    }
//
//    return ((higher - number) < (number - lower)) ? higher : lower;
//}
//
//int main() {
//    int number = getValidNumber();
//    int nearest = findNearestPowerOfTwo(number);
//    std::cout << "Nearest power of 2: " << nearest << std::endl;
//    return 0;
//}

//ex 16
//bool isPrime(int number)
//{
//    if (number <= 1) {
//        return false;
//    }
//
//    if (number == 2) {
//        return true;
//    }
//
//    if (number % 2 == 0) {
//        return false;
//    }
//
//    int sqrtNum = sqrt(number);
//    for (int i = 3; i <= sqrtNum; i += 2) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}

//ex 17
//bool isPrime(int number)
//{
//    if (number <= 1) {
//        return false;
//    }
//
//    if (number == 2) {
//        return true;
//    }
//
//    if (number % 2 == 0) {
//        return false;
//    }
//
//    int sqrtNum = sqrt(number);
//    for (int i = 3; i <= sqrtNum; i += 2) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//void printAllPrimesUpTo(int number)
//{
//    std::cout << "Prime numbers up to " << number << ": ";
//
//    for (int i = 2; i <= number; i++) {
//        if (isPrime(i)) {
//            std::cout << i << " ";
//        }
//    }
//
//    std::cout << std::endl;
//}

//ex 18
//bool isPrime(int number)
//{
//    if (number <= 1) {
//        return false;
//    }
//
//    if (number == 2) {
//        return true;
//    }
//
//    if (number % 2 == 0) {
//        return false;
//    }
//
//    int sqrtNum = sqrt(number);
//    for (int i = 3; i <= sqrtNum; i += 2) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//void primeFactorization(int number)
//{
//    std::cout << "Prime factorization of " << number << ": ";
//
//    bool first = true;
//
//    for (int i = 2; i <= number; i++) {
//        while (number % i == 0 && isPrime(i)) {
//            if (!first) {
//                std::cout << ".";
//            }
//            std::cout << i;
//            first = false;
//            number /= i;
//        }
//    }
//
//    std::cout << std::endl;
//}
//
//int main()
//{
//    int number;
//    std::cout << "Enter a number: ";
//    std::cin >> number;
//
//    primeFactorization(number);
//
//    return 0;
//}

//ex 19
//bool isPrime(int number)
//{
//    if (number <= 1) {
//        return false;
//    }
//
//    if (number == 2) {
//        return true;
//    }
//
//    if (number % 2 == 0) {
//        return false;
//    }
//
//    int sqrtNum = sqrt(number);
//    for (int i = 3; i <= sqrtNum; i += 2) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//bool canBeSumOfTwoPrimes(int number)
//{
//    if (number <= 2) {
//        return false;
//    }
//
//    for (int i = 2; i <= number / 2; i++) {
//        if (isPrime(i) && isPrime(number - i)) {
//            std::cout << number << " = " << i << " + " << (number - i) << std::endl;
//            return true;
//        }
//    }
//
//    return false;
//}
//
//int main()
//{
//    int number;
//    std::cout << "Enter a number: ";
//    std::cin >> number;
//
//    if (canBeSumOfTwoPrimes(number)) {
//        std::cout << "Yes, can be represented as sum of two primes." << std::endl;
//    }
//    else {
//        std::cout << "No, cannot be represented as sum of two primes." << std::endl;
//    }
//
//    return 0;
//}
