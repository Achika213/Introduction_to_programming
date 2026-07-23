#include <iostream>

using namespace std;

//SEMINAR

//ex 1
//int myStrLen(const char str[]) {
//	int length = 0;
//	while (str[length] != '\0')
//	{
//		length++;
//	}
//	return length;
//}
//
//int main() {
//	char text[100];
//	cin.getline(text, 100);
//	cout << myStrLen(text) << endl;
//	return 0;
//}

//ex 2
//int myStrCmp(const char first[], 
//	const char second[]) {
//	int i = 0;
//
//	while (first[i] != '\0' && second[i] != '\0' && 
//		first[i] == second[i])
//	{
//		i++;
//	}
//
//	if (first[i] > second[i])
//	{
//		return 1;
//	}
//
//	if (first[i] < second[i])
//	{
//		return -1;
//	}
//
//	return 0;
//}
//
//int main() {
//	char first[100];
//	char second[100];
//
//	cin.getline(first, 100);
//	cin.getline(second, 100);
//
//	int result = myStrCmp(first, second);
//
//	if (result > 0)
//	{
//		cout << "The first str is greater" << endl;
//	}
//	else if (true)
//	{
//		cout << "The first str is smaller" << endl;
//	}
//	else
//	{
//		cout << "The str are equal." << endl;
//	}
//	return 0;
//}

//ex 3
//void myStrCat(char destination[], const char source[]) {
//	int i = 0;
//	int j = 0;
//
//	while (source[j] != '\0')
//	{
//		destination[i] = source[j];
//		i++;
//		j++;
//	}
//
//	destination[i] = '\0';
//}
//
//int main() {
//	char first[200];
//	char second[200];
//
//	cin.getline(first, 200);
//	cin.getline(second, 100);
//
//	myStrCat(first, second);
//
//	cout << first << second;
//
//	return 0;
//}

//ex 4
//void myStrCpy(char destination[], const char source[]) {
//	int i = 0;
//
//	while (source[i] != '\0')
//	{
//		destination[i] = source[i];
//		i++;
//	}
//	destination[i] = '\0';
//}
//
//int main() {
//	char source[100];
//	char destination[100];
//
//	cin.getline(source, 100);
//
//	myStrCpy(destination, source);
//	cout << destination << endl;
//	return 0;
//}

//ex 5
//int myAtoi(const char str[]) {
//	int i = 0;
//	int sign = 1;
//	int number = 0;
//
//	while (str[i] == ' ')
//	{
//		i++;
//	}
//
//	if (str[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (str[i] == '+')
//	{
//		i++;
//	}
//
//	while (str[i] >= '0' && str[i] <= '9')
//	{
//		int digit = str[i] - '0';
//
//		number = number * 10 + digit;
//		i++;
//	}
//
//	return sign * number;
//}
//
//int main() {
//	char text[100];
//
//	cin.getline(text, 100);
//
//	cout << myAtoi(text) << endl;
//
//	return 0;
//}

//ex 6
//int searchInText(const char text[], const char searched[])
//{
//    if (searched[0] == '\0')
//    {
//        return 0;
//    }
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (searched[j] != '\0' &&
//            text[i + j] != '\0' &&
//            text[i + j] == searched[j])
//        {
//            j++;
//        }
//
//        if (searched[j] == '\0')
//        {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//int main()
//{
//    char text[200];
//    char searched[100];
//
//    cin.getline(text, 200);
//    cin.getline(searched, 100);
//
//    int index = searchInText(text, searched);
//
//    if (index == -1)
//    {
//        cout << "The text was not found." << endl;
//    }
//    else
//    {
//        cout << "The text starts at index " << index << "." << endl;
//    }
//
//    return 0;
//}


//ex 7
//int getCharOccurrencesCount(const char text[], char symbol)
//{
//    int count = 0;
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        if (text[i] == symbol)
//        {
//            count++;
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    char text[200];
//    char symbol;
//
//    cin.getline(text, 200);
//    cin >> symbol;
//
//    cout << getCharOccurrencesCount(text, symbol) << endl;
//
//    return 0;
//}

//PRACTICUM

const int SIZE = 1025; // + 1 '\0'
//ex 1
//int main() {
//	char str[SIZE];
//	cin.getline(str, SIZE);
//
//	char result[SIZE];
//	int j = 0;
//
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			result[j] = str[i];
//			j++;
//		}
//	}
//
//	result[j] = '\0';
//
//	cout << result << endl;
//	return 0;
//}


//ex 2
//int myStrLen(const char str[]) {
//	int lenght = 0;
//
//	while (str[lenght] != '\0')
//	{
//		lenght++;
//	}
//
//	return lenght;
// }
//
//void substring(const char str[], int beg, int end, char result[]) {
//	int length = myStrLen(str);
//
//	if (beg < 0 || beg >= length || beg >= end)
//	{
//		result[0] = '\0';
//		return;
//	}
//
//	if (end > length)
//	{
//		end = length;
//	}
//
//	int j = 0;
//
//	for (int i = beg; i < end; i++)
//	{
//		result[j] = str[i];
//		j++;
//	}
//	result[j] = '\0';
//}
//
//int main() {
//	char str[SIZE];
//	char result[SIZE];
//
//	int beg;
//	int end;
//
//	cin.getline(str, SIZE);
//	cin >> beg >> end;
//
//	substring(str, beg, end, result);
//
//	cout << result << endl;
//
//	return 0;
//} 
 
//ex 3
//void replaceOccurrences(char str[], char x, char a, char b) {
//	int count = 0;
//
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == x)
//		{
//			count++;
//
//			if (count % 2 != 0)
//			{
//				str[i] = a;
//			}
//			else
//			{
//				str[i] = b;
//			}
//		}
//	}
// }
//
//int main() {
//	char str[SIZE];
//	char x, a, b;
//
//	cin.getline(str, SIZE);
//	cin >> x >> a >> b;
//
//	replaceOccurrences(str, x, a, b);
//	cout << str << endl;
//	return 0;
//}


//ex 4
//void replaceOccurrences(char str[], char x, char a, char b) {
//	int count = 0;
//
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == x)
//		{
//			count++;
//
//			if (count % 2 != 0)
//			{
//				str[i] = a;
//			}
//			else
//			{
//				str[i] = b;
//			}
//		}
//	}
// }
//
//int main() {
//	char str[SIZE];
//	char x, a, b;
//
//	cin.getline(str, SIZE);
//	cin >> x >> a >> b;
//
//	replaceOccurrences(str, x, a, b);
//	cout << str << endl;
//	return 0;
//}


//ex 5
//int main() {
//	char str[SIZE];
//	cin.getline(str, SIZE);
//
//	char res;
//	cin >> res;
//	int count = 0;
//
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == res)
//		{
//			count++;
//		}
//	}
//
//	
//	cout << count << endl;
//	return 0;
//}


//ex 6
//void longestCommonPrefix(const char first[],
//    const char second[],
//    const char third[],
//    char result[])
//{
//    int i = 0;
//
//    while (first[i] != '\0' &&
//        second[i] != '\0' &&
//        third[i] != '\0' &&
//        first[i] == second[i] &&
//        first[i] == third[i])
//    {
//        result[i] = first[i];
//        i++;
//    }
//
//    result[i] = '\0';
//}


//ex 7
//int compareStrings(const char first[], const char second[])
//{
//    int i = 0;
//
//    while (first[i] != '\0' &&
//        second[i] != '\0' &&
//        first[i] == second[i])
//    {
//        i++;
//    }
//
//    if (first[i] < second[i])
//    {
//        return -1;
//    }
//
//    if (first[i] > second[i])
//    {
//        return 1;
//    }
//
//    return 0;
//}

//ex 8
//void removeRepeatingLetters(char str[])
//{
//    bool used[26] = { false };
//    int j = 0;
//
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        int index = str[i] - 'a';
//
//        if (!used[index])
//        {
//            used[index] = true;
//            str[j] = str[i];
//            j++;
//        }
//    }
//
//    str[j] = '\0';
//}


//ex 9
//int findWord(const char text[], const char word[])
//{
//    if (word[0] == '\0')
//    {
//        return 0;
//    }
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (word[j] != '\0' &&
//            text[i + j] != '\0' &&
//            text[i + j] == word[j])
//        {
//            j++;
//        }
//
//        if (word[j] == '\0')
//        {
//            return i;
//        }
//    }
//
//    return -1;
//}


//ex 10
//int countOccurrences(const char text[], const char word[])
//{
//    if (word[0] == '\0')
//    {
//        return 0;
//    }
//
//    int count = 0;
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (word[j] != '\0' &&
//            text[i + j] != '\0' &&
//            text[i + j] == word[j])
//        {
//            j++;
//        }
//
//        if (word[j] == '\0')
//        {
//            count++;
//        }
//    }
//
//    return count;
//}


//ex 11
//char toLowerCase(char symbol)
//{
//    if (symbol >= 'A' && symbol <= 'Z')
//    {
//        return symbol + ('a' - 'A');
//    }
//
//    return symbol;
//}
//
//void replaceSubstring(char text[], const char substring[])
//{
//    if (substring[0] == '\0')
//    {
//        return;
//    }
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (substring[j] != '\0' &&
//            text[i + j] != '\0' &&
//            toLowerCase(text[i + j]) ==
//            toLowerCase(substring[j]))
//        {
//            j++;
//        }
//
//        if (substring[j] == '\0')
//        {
//            for (int k = 0; k < j; k++)
//            {
//                text[i + k] = '*';
//            }
//
//            i += j - 1;
//        }
//    }
//}


//ex 12
//bool isLetter(char symbol)
//{
//    return (symbol >= 'a' && symbol <= 'z') ||
//        (symbol >= 'A' && symbol <= 'Z');
//}
//
//char toLowerCase(char symbol)
//{
//    if (symbol >= 'A' && symbol <= 'Z')
//    {
//        return symbol + ('a' - 'A');
//    }
//
//    return symbol;
//}
//
//void replaceWord(char text[], const char word[])
//{
//    if (word[0] == '\0')
//    {
//        return;
//    }
//
//    for (int i = 0; text[i] != '\0'; i++)
//    {
//        int j = 0;
//
//        while (word[j] != '\0' &&
//            text[i + j] != '\0' &&
//            toLowerCase(text[i + j]) ==
//            toLowerCase(word[j]))
//        {
//            j++;
//        }
//
//        if (word[j] == '\0')
//        {
//            bool validBeginning =
//                (i == 0 || !isLetter(text[i - 1]));
//
//            bool validEnd =
//                !isLetter(text[i + j]);
//
//            if (validBeginning && validEnd)
//            {
//                for (int k = 0; k < j; k++)
//                {
//                    text[i + k] = '*';
//                }
//
//                i += j - 1;
//            }
//        }
//    }
//}