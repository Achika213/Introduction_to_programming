#include <iostream>

using namespace std;

//POINTERS SEMINAR

//ex 1
//void swapPointers(int** p1, int** p2) {
//	int* temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main() {
//	int a = 5, b = 10;
//	int* pa = &a;
//	int* pb = &b;
//	swapPointers(&pa, &pb);
//	cout << *pa << " " << *pb << endl;
//	return 0;
//}

//ex 2
//int* bigger(int* x, int* y) {
//	if (*x > *y) {
//		return x;
//	}
//	return y;
//}
//
//int main() {
//	int a = 7, b = 3;
//	int* p = bigger(&a, &b);
//	cout << *p << endl;
//	return 0;
//}

//REFERENCE SEMINAR

//ex 1
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int a = 5, b = 7;
//	swap(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}

//ex 2
//void toUpper(char& c) {
//	if (c >= 'a' && c <= 'z') {
//		c -= 'a' + 'A';
//	}
//}
//
//void toLower(char& c) {
//	if (c >= 'A' && c <= 'Z') {
//		c += 'A' + 'a';
//	}
//}
//
//int main() {
//	char ch1 = 'a';
//	char ch2 = 'B';
//	toUpper(ch1);
//	toLower(ch2);
//	cout << ch1 << " " << ch2 << endl;
//	return 0;
//}

//ex 3
//void sort(int& a, int& b, int& c) {
//	if (a > b) swap(a, b);
//	if (a > c) swap(a, c);
//	if (b > c) swap(b, c);
//}
//
//int main() {
//	int x = 4, y = 5, z = 3;
//	sort(x, y, z);
//	cout << x << " " << y << " " << z << endl;
//	return 0;
//}

//ex 4
//int gcd(int a, int b) {
//	while (b != 0) {
//		int t = b;
//		b = a % b;
//		a = t;
//	}
//	return a;
//}
//
//void simplify(int& numerator, int& denominator) {
//	int g = gcd(numerator, denominator);
//	numerator /= g;
//	denominator /= g;
//}
//
//int main() {
//    int n1, d1, n2, d2;
//    cout << "Въведете две дроби (числител/знаменател): ";
//    cin >> n1 >> d1 >> n2 >> d2;
//
//    simplify(n1, d1);
//    simplify(n2, d2);
//
//    int numerator = n1 * d2 + n2 * d1;
//    int denominator = d1 * d2;
//
//    simplify(numerator, denominator);
//
//    cout << numerator << "/" << denominator << endl;
//    return 0;
//}

//PRACTICUM

//ex 1
//int digitCount(int number) {
//	if (number == 0) return 1;
//	
//	int count = 0;
//	while (number != 0)
//	{
//		count++;
//		number = 10;
//	}
//
//	return count;
//}
//
//int powerOfTen(int power) {
//	int result = 1;
//
//	for (int i = 0; i < power; i++) {
//		result *= 10;
//	}
//	return result;
//}
//
//void swapDigit(int& n, int& m, int k) {
//	int nLength = digitCount(n);
//	int mLength = digitCount(m);
//
//	if (k <= 0 || k > nLength || k > mLength)
//	{
//		return;
//	}
//
//	int nPosition = powerOfTen(nLength - k);
//	int mPosition = powerOfTen(mLength - k);
//
//	int nDigit = (n / nPosition) % 10;
//	int mDigit = (m / mPosition) % 10;
//
//	n = n - nDigit * nPosition + mDigit * nPosition;
//	m = m - mDigit * mPosition + nDigit * mPosition;
//}
//
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	swapDigit(n, m, k);
//	cout << n << ' ' << m;
//	return 0;
//}

//ex 2
//int power10(int exponent) {
//    int result = 1;
//
//    for (int i = 0; i < exponent; i++) {
//        result *= 10;
//    }
//
//    return result;
//}
//
//int digitCount(int number) {
//    int count = 0;
//
//    do {
//        count++;
//        number /= 10;
//    } while (number != 0);
//
//    return count;
//}
//
//void splitNumber(int number, int& first, int& second) {
//    int digits = digitCount(number);
//    int secondLength = digits / 2;
//    int divisor = power10(secondLength);
//
//    first = number / divisor;
//    second = number % divisor;
//}
//
//int main() {
//    int number;
//    int first;
//    int second;
//
//    cin >> number;
//
//    splitNumber(number, first, second);
//
//    cout << first << ' ' << second;
//
//    return 0;
//}

//ex 3
//void calculateEnd(int hour, int minute, int duration,
//    int* endHour, int* endMinute) {
//    int totalMinutes = hour * 60 + minute + duration;
//
//    *endHour = (totalMinutes / 60) % 24;
//    *endMinute = totalMinutes % 60;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int latestTime = -1;
//
//    for (int i = 0; i < n; i++) {
//        int hour;
//        int minute;
//        int duration;
//
//        cin >> hour >> minute >> duration;
//
//        int endHour;
//        int endMinute;
//
//        calculateEnd(hour, minute, duration, &endHour, &endMinute);
//
//        int endTime = endHour * 60 + endMinute;
//
//        if (endTime > latestTime) {
//            latestTime = endTime;
//        }
//    }
//
//    cout << latestTime / 60 << ' ' << latestTime % 60;
//
//    return 0;
//}

//ex 4
//int distinctPrimeDivisors(int number) {
//    int count = 0;
//
//    for (int divisor = 2; divisor * divisor <= number; divisor++) {
//        if (number % divisor == 0) {
//            count++;
//
//            while (number % divisor == 0) {
//                number /= divisor;
//            }
//        }
//    }
//
//    if (number > 1) {
//        count++;
//    }
//
//    return count;
//}
//
//void findNumbers(int& a, int& b, int k) {
//    int smallest = -1;
//    int largest = -1;
//
//    for (int number = a; number <= b; number++) {
//        if (distinctPrimeDivisors(number) == k) {
//            if (smallest == -1) {
//                smallest = number;
//            }
//
//            largest = number;
//        }
//    }
//
//    if (smallest != -1) {
//        a = smallest;
//        b = largest;
//    }
//}
//
//int main() {
//    int a;
//    int b;
//    int k;
//
//    cin >> a >> b >> k;
//
//    findNumbers(a, b, k);
//
//    cout << a << ' ' << b;
//
//    return 0;
//}

//ex 5
//int power10(int exponent) {
//    int result = 1;
//
//    for (int i = 0; i < exponent; i++) {
//        result *= 10;
//    }
//
//    return result;
//}
//
//int digitCount(int number) {
//    int count = 0;
//
//    do {
//        count++;
//        number /= 10;
//    } while (number != 0);
//
//    return count;
//}
//
//void moveDigits(int* a, int* b, int k) {
//    int divisor = power10(k);
//    int lastDigits = *a % divisor;
//
//    *a /= divisor;
//
//    int bLength = digitCount(*b);
//    *b = lastDigits * power10(bLength) + *b;
//}
//
//int main() {
//    int a;
//    int b;
//    int k;
//
//    cin >> a >> b >> k;
//
//    moveDigits(&a, &b, k);
//
//    cout << a << ' ' << b;
//
//    return 0;
//}
