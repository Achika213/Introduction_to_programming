#include <iostream>
#include <cmath> // sqrt
#include <iomanip> // setprecision ex 13
using namespace std;

//ex 1
//int main() {
//	cout << "Oh what" << endl
//		<< "a happy day!" << endl
//		<< "Oh yes," << endl
//		<< "what a happy day!" << endl;
//}

//ex 2
//int main() {
//	double a = 5.4;
//	double b = 7.9;
//	cout << "P = " << 2 * (a + b) << endl;
//	cout << "S = " << a * b << endl;
//}

//ex 3
//int main() {
//	double lv;
//	cin >> lv;
//
//	double eur = lv * 0.51;
//	double dollar = lv * 0.58;
//
//	cout << eur << " " << dollar;
//}

//ex 4
//int main() {
//	double a, b;
//	cout << "Please enter the length of the first side: ";
//	cin >> a;
//	cout << endl;
//
//	cout << "Please enter the length of the second side: ";
//	cin >> b;
//	cout << endl;
//
//	cout << "P = " << 2 * (a + b) << endl;
//	cout << "S = " << a * b << endl;	
//}

//ex 5
//int main() {
//	int num1, num2;
//	cin >> num1 >> num2;
//	cout << boolalpha << (num1 < num2) << endl;
//}

//ex 6
//int main() {
//	int dividend, divisor;
//	cin >> dividend >> divisor;
//
//	cout << "The quotient of the division is : "
//		<< dividend / divisor << endl;
//	cout << "The remainder of the division is : "
//		<< dividend % divisor << endl;
//}

//ex 7
//int main() {
//	unsigned apples, pears, bananas;
//	cin >> apples >> pears >> bananas;
//
//	cout << "Pesho, don’t forget to buy "
//		<< apples << " apples, "
//		<< pears << " pears and "
//		<< bananas << " bananas!";
//}

//ex 8
//const double PI = 3.14159265;
//int main() {
//	double r;
//	cin >> r;
//	cout << "C = " << 2 * r * PI << endl;
//	cout << "S = " << r * r * PI << endl;
//}

//ex 9
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	double D = b * b - 4 * (a * c);
//	int x1 = (- b + sqrt(D)) / (2 * a);
//	int x2 = (- b - sqrt(D)) / (2 * a);
//
//	cout << x1 << " " << x2;
//}

//ex 10
//int main() {
//	int a, b, temp = 0;
//	cin >> a >> b;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << a << " " << b;
//}

//ex 11 
//int main() {
//	int a, b;
//	cin >> a >> b;
//	
//	bool isFirstHigher = a > b;
//
//	cout << a * isFirstHigher + b * !isFirstHigher << endl;
//	cout << a * !isFirstHigher + b * isFirstHigher << endl;
//}

//ex 12
//int main() {
//	int inputSec;
//	cin >> inputSec;
//
//	int days = inputSec / (60 * 60 * 24);
//	int hours = (inputSec / (60 * 60)) % 24;
//	int minutes = (inputSec / 60) % 60;
//	int seconds = inputSec % 60;
//
//	cout << days << " days, "
//		<< hours << " hours, "
//		<< minutes << " minutes, "
//		<< seconds << " seconds";
//}

//ex 13
//int main() {
//	double x1, x2, y1, y2;
//	cin >> x1 >> y1 >> x2 >> y2;
//
//	double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//
//	cout << "Distance: " << fixed << setprecision(2) << distance;
//}

//ex 14
//int main()
//{
//	long long cardNumber;
//	cin >> cardNumber;
//
//	cout << "XXXXXXXXXXXX" << cardNumber % 10000;
//}