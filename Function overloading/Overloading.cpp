#include <iostream>
#include <time.h>

using namespace std;

void fillArray(int arr[], int length);
void fillArray(double arr[], int length);
void fillArray(char arr[], int length);
void fillArray(bool arr[], int length);

void showArr(int arr[], int length);
void showArr(double arr[], int length);
void showArr(bool arr[], int length);
void showArr(char arr[], int length);

int main() 
{
	srand(time(NULL));

	const int length = 10;

	int arr[length] = {};
	double arr_1[length] = {};
	char arr_2[length] = {};
	bool arr_3[length] = {};
    
	fillArray(arr, length);
	fillArray(arr_1, length);
	fillArray(arr_2, length);
	fillArray(arr_3, length);

	showArr(arr, length);
	showArr(arr_1, length);
	showArr(arr_2, length);
	showArr(arr_3, length);
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
	for (int i = 0;i<length;i++)
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
}
void showArr(double arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}
void showArr(char arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}
void showArr(bool arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << boolalpha << arr[i] << " ";
	}
}