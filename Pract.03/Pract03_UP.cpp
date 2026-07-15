#include <iostream>
#include <cmath> //ex 14

using namespace std;

//SEMINAR

//ex 1
//int main() {
//    int num;
//    int sum = 0;
//
//    do
//    {
//        cin >> num;
//        sum += num;
//
//    } while (num == 0);
//
//    cout << sum << endl;
//
//    return 0;
//}

//ex 2
//int main() {
//	int num;
//	int reverseNum = 0;
//	cin >> num;
//
//	while (num != 0)
//	{
//		int digit = num % 10;
//		reverseNum = reverseNum * 10 + digit;
//		num = num / 10;
//	}
//
//	cout << (reverseNum + 1);
//
//	return 0;
//}

//ex 3
//int main() {
//	int num1, num2;
//	cin >> num1 >> num2;
//
//	int smaller;
//
//	if (num1 < num2)
//	{
//		smaller = num1;
//	}
//	else
//	{
//		smaller = num2;
//	}
//
//	for (int i = smaller; i >= 1; i--)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			cout << i << " ";
//		}
//	}
//
//	return 0;
//}

//PRACTICUM

//ex 1 
//int main() {
//
//	int n ;
//	cin >> n;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j;
//		}
//
//		if (i != n)
//		{
//			cout << endl;
//		}
//	}
//
//	return 0;
//}

//ex 2
//int main() {
//	int n;
//	cin >> n;
//
//	for (int i = 1; i < n; i++)
//	{
//		int x = i;
//		int y = n - x;
//
//		cout << "x = " << x << "y = " << y << endl;
//	}
//}

//ex 3
//int main() {
//	int n;
//	cin >> n;
//	
//	int rev = 0;
//	n = n * n;
//
//	while (n != 0)
//	{
//		rev = rev * 10 + n % 10;
//		n /= 10;
//	}
//
//	cout << rev;
//}

//ex 4
//int main() {
//	int m, n;
//	cin >> m >> n;
//
//	if (n <= 0 || m <= 0) {
//		cout << "Invalid input." << endl;
//		return 0;
//	}
//
//	for (int i = 1; i <= n * m; i++)
//	{
//		cout << i << " ";
//
//		if (i % m == 0)
//		{
//			cout << endl;
//		}
//	}
//
//}

//ex 5
//int main() {
//	int n;
//	cin >> n;
//	
//	if (n < 0 || n > 100)
//	{
//		cout << "Invalid input";
//		return 0;
//	}
//
//	int count = 0, currentGuess;
//	while (true)
//	{
//		cin >> currentGuess;
//		count++;
//
//		if (currentGuess == n)
//		{
//			break;
//		}
//
//		cout << (currentGuess > n ? "Higher" : "Lower") << endl;
//	}
//	
//	cout << "Congrats!" << count << endl;
//	
//}

//ex 6 
//int main() {
//	int n;
//	cin >> n;
//
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		count += i;
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int currentNum;
//		cin >> currentNum;
//		count -= currentNum;
//	}
//	
//	cout << count;
//
//	return 0;
//}  

//ex 7
//int main() {
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			for (int k = j; k <= n; k++)
//			{
//				if (i * i + j * j == k * k)
//				{
//					cout << i << " " << j << " " << k << endl;
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//ex 8
//int main() {
//
//	int n;
//	char s;
//	cin >> n >> s;
//
//	if (n < 2 || n > 9)
//	{
//		cout << "Incorrect number" << endl;
//		return 0;
//	}
//
//	int numberOfRows = 2 * n - 1;
//
//	for (int i = 1; i <= numberOfRows; i++)
//	{
//
//		int numberOfEmptySpaces = abs(n - i);
//		int	numberOfSymbols = numberOfRows - 2 * numberOfEmptySpaces;
//		
//		for (int j = 0; j < numberOfEmptySpaces; j++)
//		{
//			cout << ' ';
//		}
//
//		for (int j = 0; j < numberOfSymbols; j++)
//		{
//			cout << s;
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}

//ex 9
//int main() {
//	int n;
//	cin >> n;
//
//	if (n <= 3)
//	{
//		cout << "Invalid input." << endl;
//		return 0;
//	}
//
//	int num1 = 1, num2 = 1;
//	cout << num1 << " " << num2 << " ";
//
//	while (num1 + num2 < n)
//	{
//		cout << num1 + num2 << " ";
//		int temp = num1;
//		num1 = num2;
//		num2 = num1 + temp;
//	}
//}

//ex 10 
//int main() {
//	int number, digits = 0;
//	cin >> number;
//
//	int temp = number; //copy of number
//	while (temp != 0)
//	{
//		temp /= 10;
//		digits++;
//	}
//
//	int newNumber = 0;
//	if (digits > 2)
//	{
//		int Multiplier = 1;
//		const int centralDigit = digits / 2 + 1;
//
//		for (int i = 1; i <= digits; i++)
//		{
//			if (digits % 2 == 0 && i == centralDigit - 1)
//			{
//				number /= 10;
//				continue;
//			}
//
//			if (i == centralDigit)
//			{
//				number /= 10;
//				continue;
//			}
//
//			newNumber += number % 10 * Multiplier;
//			Multiplier *= 10;
//			number /= 10;
//		}
//	}
//
//	cout << newNumber << ", ";
//	cout << ++newNumber << endl;
//}

//ex 11
//int main() {
//	int a = 0, b = 0;
//	bool isPrime = false;
//
//	cin >> a >> b;
//
//	if (a < 0 || b < 0) {
//		cout << "Invalid input." << endl;
//		return 0;
//	}
//
//	if (a > b) {
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	for (int i = a; i <= b; i++) {
//		if (i == 2) {
//			cout << i << " ";
//			continue;
//		}
//
//		if (i == 0 || i == 1 || i % 2 == 0) {
//			continue;
//		}
//
//		isPrime = true;
//
//		int squareRoot = sqrt(i);
//		for (int j = 3; j <= squareRoot; j += 2) {
//			if (i % j == 0) {
//				isPrime = false;
//				break;
//			}
//		}
//
//		if (isPrime) {
//			cout << i << " ";
//		}
//	}
//}

//ex 12
//int main() {
//	int n;
//	cin >> n;
//
//	if (n < 1) {
//		cout << "false";
//		return 0;
//	}
//
//	bool isMultipleOfTwo = true;
//	while (n / 2 != 0) {
//		if (n % 2 != 0) {
//			isMultipleOfTwo = false;
//			break;
//		}
//
//		n /= 2;
//	}
//
//	cout << boolalpha << isMultipleOfTwo << endl;
//}

//ex 13
//int main() {
//	int n;
//	cin >> n;
//
//	while (n != 0) {
//		int k = 1;
//		int pow = 0;
//
//		while (k * 2 <= n) {
//			k *= 2;
//			pow++;
//		}
//
//		n -= k;
//		cout << "2^" << pow;
//
//		if (n != 0) {
//			cout << "+";
//		}
//	}
//}

//ex 14
//int main() {
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//
//	for (int i = -100; i <= 100; i++) {
//		if (a * pow(i, 4) + b * pow(i, 3) + c * pow(i, 2) + d * i + e >= 0) {
//			cout << i << " ";
//		}
//	}
//}