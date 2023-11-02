#include<iostream>
#include<time.h>

using namespace std;
int* fill_first_array(int length);

int* fill_second_array(int length_1);

void show_first_array(int* arr, int length);

void show_second_array(int* arr_1, int length_1);

int main()
{
	srand(time(NULL));

	int length = {};
	int length_1 = {};

	cout << "Enter length of first array: ";
	cin >> length;
	cout << "Enter length of second array: ";
	cin >> length_1;

	int*  first_arr = fill_first_array(length);
	int* second_arr = fill_second_array(length_1);

	show_first_array(first_arr, length);

	cout << "\n";

	show_second_array(second_arr, length_1);

	int count{};

	for (int i = 0;i< length;i++)
	{
	 for (int j = 0;j<length_1;j++)
	 {
	  if (*(first_arr + i) == *(second_arr + j))
	  {
		  count++;
	  }
	 }
	}

}

int* fill_first_array(int length)
{
	int* first_arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		*(first_arr + i) = rand() % 11;
	}

	return first_arr;
}

int* fill_second_array(int length_1)
{
	int* second_arr = new int[length_1];

	for (int i = 0; i < length_1; i++)
	{
		*(second_arr + i) = rand() % 11;
	}

	return second_arr;
}

void show_first_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << " ";
	}
}

void show_second_array(int* arr_1, int length_1)
{
	for (int i = 0; i < length_1; i++)
	{
		cout << *(arr_1 + i) << " ";
	}
}