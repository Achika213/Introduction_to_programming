#include <iostream>

using namespace std;

//ex 1
//int main()
//{
//    int year = 0;
//    cin >> year;
//
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//	{
//		cout << "leap";
//	}
//	else
//	{
//		cout << "not leap";
//	}
//}

//ex 2
//int main() {
//	char symbol;
//	cin >> symbol;
//	if ((symbol >= 'A' && symbol <= 'Z') 
//		|| (symbol >= 'a' && symbol <= 'z'))
//	{
//		switch (symbol)
//		{
//			case 'A':
//			case 'E':
//			case 'I':
//			case 'O':
//			case 'U':
//			case 'Y':
//			case 'a':
//			case 'e':
//			case 'i':
//			case 'o':
//			case 'u':
//			case 'y':
//				cout << "Vowel";
//				break;
//
//			default:
//				cout << "Not vowel";
//				break;
//		}
//	}
//	else
//	{
//		cout << "The symbol is not part of the latin alphabet." << endl;
//	}
//
//	return 0;
//}

//ex 3
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << (a > b ? a : b) << endl;
//}

//ex 4
//int main() {
//	int percent, grade;
//
//	std::cout << "Result: ";
//	std::cin >> percent;
//
//	if (percent >= 0 && percent <= 100)
//	{
//		bool isSixPlus = false;
//
//		if (percent >= 90)
//		{
//			grade = 6;
//			isSixPlus = true;
//		}
//		else if (percent >= 80)
//		{
//			grade = 6;
//		}
//		else if (percent >= 70)
//		{
//			grade = 5;
//		}
//		else if (percent >= 60)
//		{
//			grade = 4;
//		}
//		else if (percent >= 40)
//		{
//			grade = 3;
//		}
//		else
//		{
//			grade = 2;
//		}
//
//		std::cout << "Grade: " << grade << (isSixPlus ? "+\n" : "\n");
//	}
//	else
//	{
//		std::cout << "Not valid %!\n";
//	}
//
//	return 0;
//}

//ex 5
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << boolalpha << ((a < b + c) && (b < a + c) && 
//		(c < a + b) ? true : false) << endl;
//	return 0;
//}

//ex 6
//int main() {
//	cout << "Finding the root of the equation a * x^2 + b * x + c = 0\n";
//
//	double a;
//	cout << "Enter the value of a: ";
//	cin >> a;
//
//	if (a < 0.00000001)
//	{
//		cout << "If a is 0, then this is not a quadratic equation!\n";
//		return 1;
//	}
//
//	double b, c;
//	cout << "Enter the value of b: ";
//	cin >> b;
//
//	cout << "Enter the value of c: ";
//	cin >> c;
//
//	double discriminant;
//	discriminant = (b * b) - (4 * a * c);
//
//	double root1, root2, imaginary;
//	if (discriminant > 0)
//	{
//		root1 = (-b + sqrt(discriminant)) / (2 * a);
//		root2 = (-b - sqrt(discriminant)) / (2 * a);
//
//		cout << "Two distinct and real roots exist: " << root1 << " and " << root2 << endl;
//	}
//	else if (discriminant == 0)
//	{
//		root1 = root2 = -b / (2 * a);
//
//		cout << "Two equal and real roots exist: " << root1 << " and " << root2 << endl;
//	}
//	else if (discriminant < 0)
//	{
//		root1 = root2 = -b / (2 * a);
//		imaginary = sqrt(-discriminant) / (2 * a);
//
//		cout << "Two distinct complex roots exist: " << root1 << "+" << imaginary << "i and " << root2 << "-" << imaginary << "i\n";
//	}
//
//	return 0;
//}

//ex 7
//int main() {
//	char symbol;
//	cin >> symbol;
//	if (symbol >= 'A' && symbol <= 'Z')
//	{
//		cout << (symbol += 32) << endl;
//	}
//	else if (symbol >= 'a' && symbol <= 'z')
//	{
//		cout << (symbol -= 32) << endl;
//	}
//	else
//	{
//		cout << "Invalid symbol" << endl;
//	}
//
//	return 0;
//}

//ex 8
//int main() {
//	int arabNum = 0;
//	cin >> arabNum;
//
//	if (arabNum / 10 == 0 && arabNum != 0) 
//	{
//		switch (arabNum)
//		{
//		case 1:
//			cout << "I";
//			break;
//		case 2:
//			cout << "II";
//			break;
//		case 3:
//			cout << "III";
//			break;
//		case 4:
//			std::cout << "IV";
//			break;
//		case 5:
//			std::cout << "V";
//			break;
//		case 6:
//			std::cout << "VI";
//			break;
//		case 7:
//			std::cout << "VII";
//			break;
//		case 8:
//			std::cout << "VIII";
//			break;
//		case 9:
//			std::cout << "IX";
//			break;
//		default:
//			break;
//		}
//
//		cout << endl;
//	}
//	else
//	{
//		cout << "Entered number contains more than one digit or is 0." << endl;
//	}
//
//	return 0;
//}

//ex 9
//int main() {
//	int num1, num2, num3;
//	cin >> num1 >> num2 >> num3;
//
//	int smallest, mid, biggest;
//
//	if (num1 <= num2 && num1 <= num3)
//	{
//		smallest = num1;
//		if (num2 <= num3)
//		{
//			mid = num2;
//			biggest = num3;
//		}
//		else
//		{
//			mid = num3;
//			biggest = num2;
//		}
//		
//	}
//	else if (num2 <= num1 && num2 <= num3)
//	{
//		smallest = num2;
//		if (num1 <= num3)
//		{
//			mid = num1;
//			biggest = num3;
//		}
//		else
//		{
//			mid = num3;
//			biggest = num1;
//		}
//	}
//	else if (num3 <= num1 && num3 <= num2)
//	{
//		smallest = num3;
//		if (num1 <= num2)
//		{
//			mid = num1;
//			biggest = num2;
//		}
//		else
//		{
//			mid = num2;
//			biggest = num1;
//		}
//	}
//	else
//	{
//		cout << "Invalid nums" << endl;
//	}
//
//	cout << smallest << " " << mid
//		<< " " << biggest << endl;
//
//	return 0;
//}

//ex 10
//int main() {
//	double num1, num2;
//	char operation;
//
//	std::cout << "Enter first number: ";
//	std::cin >> num1;
//
//	std::cout << "Enter operation (+, -, *, /): ";
//	std::cin >> operation;
//
//	std::cout << "Enter second number: ";
//	std::cin >> num2;
//
//	switch (operation)
//	{
//	case '+':
//		std::cout << "Result: " << num1 + num2 << std::endl;
//		break;
//	case '-':
//		std::cout << "Result: " << num1 - num2 << std::endl;
//		break;
//	case '*':
//		std::cout << "Result: " << num1 * num2 << std::endl;
//		break;
//	case '/':
//		if (num2 == 0)
//		{
//			std::cout << "Error: Division by zero is not allowed!" << std::endl;
//		}
//		else
//		{
//			std::cout << "Result: " << num1 / num2 << std::endl;
//		}
//		break;
//	default:
//		std::cout << "Invalid operation!" << std::endl;
//		break;
//	}
//
//	return 0;
//}

//ex 11
//int main() {
//	int digit1, digit2, digit3;
//
//	std::cin >> digit1 >> digit2 >> digit3;
//
//	int largest, middle, smallest;
//
//	if (digit1 >= digit2 && digit1 >= digit3)
//	{
//		largest = digit1;
//		if (digit2 >= digit3)
//		{
//			middle = digit2;
//			smallest = digit3;
//		}
//		else
//		{
//			middle = digit3;
//			smallest = digit2;
//		}
//	}
//	else if (digit2 >= digit1 && digit2 >= digit3)
//	{
//		largest = digit2;
//		if (digit1 >= digit3)
//		{
//			middle = digit1;
//			smallest = digit3;
//		}
//		else
//		{
//			middle = digit3;
//			smallest = digit1;
//		}
//	}
//	else
//	{
//		largest = digit3;
//		if (digit1 >= digit2)
//		{
//			middle = digit1;
//			smallest = digit2;
//		}
//		else
//		{
//			middle = digit2;
//			smallest = digit1;
//		}
//	}
//
//	int largestNumber = largest * 100 + middle * 10 + smallest;
//	std::cout << largestNumber << std::endl;
//
//	return 0;
//}

//ex 12
//int main() {
//	int day, month;
//
//	std::cout << "Date: ";
//	std::cin >> day >> month;
//
//	if (month < 1 || month > 12 || day < 1)
//	{
//		std::cout << "Invalid date!" << std::endl;
//		return 1;
//	}
//
//	int daysInMonth;
//	switch (month)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		daysInMonth = 31;
//		break;
//	case 4: case 6: case 9: case 11:
//		daysInMonth = 30;
//		break;
//	case 2:
//		daysInMonth = 28; 
//		break;
//	default:
//		std::cout << "Invalid month!" << std::endl;
//		return 1;
//	}
//
//	if (day > daysInMonth)
//	{
//		std::cout << "Invalid day for this month!" << std::endl;
//		return 1;
//	}
//
//	int nextDay = day + 1;
//	int nextMonth = month;
//
//	if (nextDay > daysInMonth)
//	{
//		nextDay = 1;
//		nextMonth++;
//
//		if (nextMonth > 12)
//		{
//			nextMonth = 1;
//		}
//	}
//
//	std::cout << "Next date: " << nextDay << " " << nextMonth << std::endl;
//
//	return 0;
//}

//ex 13
//int main() {
//	int number;
//
//	std::cin >> number;
//
//	if (number < 1000 || number > 9999)
//	{
//		std::cout << "Number must be in range [1000..9999]!" << std::endl;
//		return 1;
//	}
//
//	int firstDigit = number / 1000;
//	int secondDigit = (number / 100) % 10;
//	int thirdDigit = (number / 10) % 10;
//	int fourthDigit = number % 10;
//
//	int firstNumber = firstDigit * 10 + fourthDigit;
//	int secondNumber = secondDigit * 10 + thirdDigit;
//
//	if (firstNumber < secondNumber)
//	{
//		std::cout << "less (" << firstNumber << "<" << secondNumber << ")" << std::endl;
//	}
//	else if (firstNumber == secondNumber)
//	{
//		std::cout << "equal (" << firstNumber << "=" << secondNumber << ")" << std::endl;
//	}
//	else
//	{
//		std::cout << "greater (" << firstNumber << ">" << secondNumber << ")" << std::endl;
//	}
//
//	return 0;
//}