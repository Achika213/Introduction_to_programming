#include <iostream>

using namespace std;

//SEMINAR

//ex 1
//void InputArray(int* arr, const int size) {
//	for (int i = 0; i < size; ++i) {
//		std::cin >> arr[i];
//	}
//}
//
//void PrintArray(const int* arr, int size) {
//	for (int i = 0; i < size; ++i) {
//		std::cout << arr[i] << std::endl;
//	}
//}

//ex 2
//int LinearSearch(const int* arr, int size, int number) {
//	for (int i = 0; i < size; ++i) {
//		if (arr[i] == number) {
//			return i;
//		}
//	}
//
//	return -1; 
//}

//ex 3
//void Swap(int &f, int &s) {
//	int temp = f;
//	f = s;
//	s = temp;
//}
//
//void ReverseArray(int *arr, int size) {
//	for (int i = 0; i < size / 2; ++i) {
//		Swap(arr[i], arr[size - 1 - i]);
//	}
//}

//ex 4
//void bubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool swapped = false; 
//
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//                swapped = true; 
//            }
//        }
//
//        if (!swapped)
//            break;
//    }
//}
//
//int main()
//{
//    int arr[] = { 4, 1, 5, 2 , 3 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    bubbleSort(arr, n);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//ex 5
//int BinarySearch(const int* arr, int size, int x)
//{
//    int l = 0, r = size - 1;
//    while (l <= r)
//    {
//        int m = l + (r - l) / 2;
//        if (arr[m] == x) {
//            return m;
//        }
//        else if (arr[m] < x) { 
//            l = m + 1;
//        }
//        else { 
//            r = m - 1;
//        }
//    }
//    return -1; 
//}

//ex 6
//const unsigned MaxSize = 1000;
//
//void InitArray(bool* arr, unsigned size, bool value)
//{
//	for (unsigned i = 0; i < size; i++) {
//		arr[i] = value;
//	}
//}
//
//void EratosthenesSieve(bool* arr, unsigned size)
//{
//	arr[0] = arr[1] = false;
//
//	for (unsigned i = 2; i < sqrt(size); i++) {
//		if (!arr[i]) { //ако числото е задраскано
//			continue;
//		}
//
//		for (unsigned j = i * i; j < size; j += i) {
//			arr[j] = false; //задраскваме
//		}
//	}
//}
//
//void PrintSieve(const bool* arr, unsigned size)
//{
//	for (unsigned i = 0; i < size; i++) {
//		if (arr[i]) {
//			std::cout << i << " ";
//		}
//	}
//}
//
//int main()
//{
//	bool buffer[MaxSize];
//
//	int n;
//	std::cin >> n;
//
//	InitArray(buffer, n, true);
//	EratosthenesSieve(buffer, n);
//	PrintSieve(buffer, n);
//
//	return 0;
//}

//PRACTICUM

//ex 1
//const int ARRSIZE = 10;
//int main() {
//	int n;
//	cin >> n;
//
//	int arr[ARRSIZE];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	bool found = false;
//
//	for (int i = 0; i < n - 1 && !found; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				cout << arr[i];
//				found = true;
//				break;
//			}
//		}
//	}
//
//	if (!found) {
//		cout << "There is no equal numbers.";
//	}
//	return 0;
//}

//ex 2
//const int SIZEARR = 15;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	int arr[SIZEARR];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				if (arr[j] % 2 == 0)
//				{
//					swap(arr[i], arr[j]);
//					break;
//				}
//			}
//		}
//	}
//
//	int border = 0;
//
//	while (border < n && arr[border] % 2 == 0)
//	{
//		border++;
//	}
//
//	for (int i = 0; i < border - 1; i++)
//	{
//		for (int j = i + 1; j < border; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	for (int i = border; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//ex 3 
//int main() {
//	unsigned int n;
//	cin >> n;
//
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//
//	int binary[32];
//	int count = 0;
//
//	while (n > 0)
//	{
//		binary[count] = n % 2;
//		count++;
//		n /= 2;
//	}
//
//	for (int i = count - 1; i >= 0; i--)
//	{
//		cout << binary[i];
//	}
//
//	return 0;
//}

//ex 4
//int main() {
//	int n;
//	cin >> n;
//
//	int original = n;
//	int reversed = 0;
//
//	while (n > 0)
//	{
//		int digit = n % 10;
//		reversed = reversed * 10 + digit;
//		n /= 10;
//	}
//
//	if (original == reversed)
//	{
//		cout << true;
//	}
//	else
//	{
//		cout << false;
//	}
//	return 0;
//}

//ex 5
//PART 1
//void printIntersection(int a[], int n, int b[], int m)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i] == b[j])
//            {
//                cout << a[i] << " ";
//                break;
//            }
//        }
//    }
//}
//
//int main()
//{
//    const int SIZE = 100;
//
//    int a[SIZE], b[SIZE];
//    int n, m;
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//
//    cin >> m;
//
//    for (int i = 0; i < m; i++)
//    {
//        cin >> b[i];
//    }
//
//    printIntersection(a, n, b, m);
//
//    return 0;
//}


//PART 2 BONUS
//void printSortedIntersection(int a[], int n, int b[], int m)
//{
//    int i = 0;
//    int j = 0;
//
//    while (i < n && j < m)
//    {
//        if (a[i] == b[j])
//        {
//            cout << a[i] << " ";
//            i++;
//            j++;
//        }
//        else if (a[i] < b[j])
//        {
//            i++;
//        }
//        else
//        {
//            j++;
//        }
//    }
//}

//ex 6
//void swapNumbers(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int main()
//{
//    const int SIZE = 100;
//
//    int n;
//    int arr[SIZE];
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (i % 2 == 0)
//        {
//            // arr[i] трябва да е по-голямо от arr[i + 1]
//            if (arr[i] < arr[i + 1])
//            {
//                swapNumbers(arr[i], arr[i + 1]);
//            }
//        }
//        else
//        {
//            // arr[i] трябва да е по-малко от arr[i + 1]
//            if (arr[i] > arr[i + 1])
//            {
//                swapNumbers(arr[i], arr[i + 1]);
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

//ex 7
//const int SIZE = 100;
//
//void transpose(int matrix[][SIZE], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int temp = matrix[i][j];
//			matrix[i][j] = matrix[j][i];
//			matrix[j][i] = temp;
//		}
//	}
//}
//
//void printMatrix(int matrix[][SIZE], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	int n;
//	int matrix[SIZE][SIZE];
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	transpose(matrix, n);
//	printMatrix(matrix, n);
//
//	return 0;
//}

//ex 8
//const int SIZE = 100;
//
//void multiplyMatrices(int first[][SIZE],
//	int second[][SIZE],
//	int result[][SIZE],
//	int n, int m, int k) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			result[i][j] = 0;
//
//			for (int p = 0; p < m; p++)
//			{
//				result[i][j] += first[i][p] * second[p][j];
//			}
//		}
//	}
//}
//
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//
//	int first[SIZE][SIZE];
//	int second[SIZE][SIZE];
//	int result[SIZE][SIZE];
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> first[i][j];
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cin >> second[i][j];
//		}
//	}
//
//	multiplyMatrices(first, second, result, n, m, k);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cout << result[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//ex 9
//const int SIZE = 3;
//
//void printBoard(char board[][SIZE])
//{
//    cout << endl;
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = 0; j < SIZE; j++)
//        {
//            cout << " " << board[i][j] << " ";
//
//            if (j < SIZE - 1)
//            {
//                cout << "|";
//            }
//        }
//
//        cout << endl;
//
//        if (i < SIZE - 1)
//        {
//            cout << "---+---+---" << endl;
//        }
//    }
//
//    cout << endl;
//}
//
//bool isWinner(char board[][SIZE], char player)
//{
//    // Check the rows
//    for (int i = 0; i < SIZE; i++)
//    {
//        if (board[i][0] == player &&
//            board[i][1] == player &&
//            board[i][2] == player)
//        {
//            return true;
//        }
//    }
//
//    // Check the columns
//    for (int j = 0; j < SIZE; j++)
//    {
//        if (board[0][j] == player &&
//            board[1][j] == player &&
//            board[2][j] == player)
//        {
//            return true;
//        }
//    }
//
//    // Check the main diagonal
//    if (board[0][0] == player &&
//        board[1][1] == player &&
//        board[2][2] == player)
//    {
//        return true;
//    }
//
//    // Check the secondary diagonal
//    if (board[0][2] == player &&
//        board[1][1] == player &&
//        board[2][0] == player)
//    {
//        return true;
//    }
//
//    return false;
//}
//
//bool isBoardFull(char board[][SIZE])
//{
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = 0; j < SIZE; j++)
//        {
//            if (board[i][j] == ' ')
//            {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//int main()
//{
//    char board[SIZE][SIZE] =
//    {
//        {' ', ' ', ' '},
//        {' ', ' ', ' '},
//        {' ', ' ', ' '}
//    };
//
//    char currentPlayer = 'X';
//
//    while (true)
//    {
//        printBoard(board);
//
//        int row;
//        int column;
//
//        cout << "Player " << currentPlayer
//            << ", enter row and column: ";
//
//        cin >> row >> column;
//
//        // Convert coordinates 1-3 to indices 0-2
//        row--;
//        column--;
//
//        if (row < 0 || row >= SIZE ||
//            column < 0 || column >= SIZE)
//        {
//            cout << "Invalid coordinates. Try again." << endl;
//            continue;
//        }
//
//        if (board[row][column] != ' ')
//        {
//            cout << "This position is already occupied. Try again."
//                << endl;
//            continue;
//        }
//
//        board[row][column] = currentPlayer;
//
//        if (isWinner(board, currentPlayer))
//        {
//            printBoard(board);
//            cout << "Player " << currentPlayer << " wins!" << endl;
//            break;
//        }
//
//        if (isBoardFull(board))
//        {
//            printBoard(board);
//            cout << "The game ended in a draw." << endl;
//            break;
//        }
//
//        if (currentPlayer == 'X')
//        {
//            currentPlayer = 'O';
//        }
//        else
//        {
//            currentPlayer = 'X';
//        }
//    }
//
//    return 0;
//}