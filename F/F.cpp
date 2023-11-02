#include<iostream>
#include<time.h>

using namespace std;

void fillArray(int arr[], int length);
void fillArray(double arr[], int length);
void fillArray(char arr[], int length);
void fillArray(bool arr[], int length);

void showArr(int arr[], int length);
void showArr(double arr[], int length);
void showArr(bool arr[], int length);
void showArr(char arr[], int length);

void fillArray_with_range(int arr[], int length, int min, int max);
void fillArray_with_range(double arr[], int length, int min, int max);
void fillArray_with_range(char arr[], int length, int min, int max);
void fillArray_with_range(bool arr[], int length, int min, int max);

void search_index(int arr[], int length, int element);
void search_index(double arr[], int length, double element);
void search_index(char arr[], int length, char element);
void search_index(bool arr[], int length, bool element);

int main()
{
	srand(time(NULL));

	const int length = 10;

	int arr[length] = {};
	double arr_1[length] = {};
	char arr_2[length] = {};
	bool arr_3[length] = {};

	int min = {};
	int max = {};

	fillArray(arr, length);
	fillArray(arr_1, length);
	fillArray(arr_2, length);
	fillArray(arr_3, length);


	showArr(arr, length);
	showArr(arr_1, length);
	showArr(arr_2, length);
	showArr(arr_3, length);

	cout << "\n";

	search_index(arr, length, 99);
	search_index(arr_1, length, 53.65);
	search_index(arr_2, length, '!');
	search_index(arr_3, length, true);

	cout << "\n";

	cout << "Enter first number in range: ";
	cin >> min;

	cout << "Enter end number in range: ";
	cin >> max;

	cout << "\n";

	fillArray_with_range(arr, length, min, max);
	fillArray_with_range(arr_1, length, min, max);
	fillArray_with_range(arr_2, length, min, max);
	fillArray_with_range(arr_3, length, min, max);

	showArr(arr, length);
	showArr(arr_1, length);
	showArr(arr_2, length);
	showArr(arr_3, length);

	cout << "\n"; \

		search_index(arr, length, 99);
	search_index(arr_1, length, 53.65);
	search_index(arr_2, length, '!');
	search_index(arr_3, length, true);

	cout << "\n";
	return 0;
}

void fillArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 101;
	}
}

void fillArray(double arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (rand() % 10001) / 100.0;
	}
}
void fillArray(char arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % ('~' - '!' + 1) + '!';
	}
}
void fillArray(bool arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 2;
	}
}


void showArr(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void showArr(double arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void showArr(char arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void showArr(bool arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << boolalpha << arr[i] << " ";
	}
	cout << "\n";
}


void fillArray_with_range(int arr[], int length, int min, int max)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}
void fillArray_with_range(double arr[], int length, int min, int max)
{
	for (int i = 0; i < length; i++)
	{
		int calc = ((max - min) * 100) + 1;
		arr[i] = rand() % calc / 100.0;
	}
}
void fillArray_with_range(char arr[], int length, int min, int max)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}
void fillArray_with_range(bool arr[], int length, int min, int max)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}


void search_index(int arr[], int length, int element)
{
	int elem = element, index = -1;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == elem)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << "Index of " << elem << " is " << index << endl;
	}
	else
	{
		cout << element << " is not found" << endl;
	}
}
void search_index(double arr[], int length, double element)
{
	double elem = element, index = -1;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == elem)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << "Index of " << elem << " is " << index << endl;
	}
	else
	{
		cout << elem << " is not found" << endl;
	}
}
void search_index(char arr[], int length, char element)
{
	char elem = element;
	int index = -1;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == elem)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << "Index of " << elem << " is " << index << endl;
	}
	else
	{
		cout << element << " is not found" << endl;
	}
}
void search_index(bool arr[], int length, bool element)
{
	bool elem = element;
	int index = -1;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == elem)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		cout << "Index of " << elem << " is " << index << endl;
	}
	else
	{
		cout << elem << " is not found" << endl;
	}
}
