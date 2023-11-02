#include<iostream>
#include<time.h>

using namespace std;

void rectangle (int, int);
int return_cube(int);
template<class T>
T choose_bigger(T, T);
bool is_positive(int);
bool simple_number(int);

int main() 
{
	rectangle(4, 7);
	cout << "\n";
	cout << return_cube(54);
	cout << "\n";
	cout << choose_bigger('R', '1');
	cout << "\n";
	cout << is_positive(-2);
	cout << "\n";
	cout << simple_number(5);

	return 0;
}

void rectangle(int N, int K)
{
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < K; j++) cout << "*" << " ";
	
		cout << "\n";
	}
}

int return_cube(int number)
{
	return number * number * number;
}

template<class T>
T choose_bigger(T number, T number_1) 
{
	if (number < number_1) return number_1;
	
	else return number;
}

bool is_positive(int number) 
{
	if (number < 0) return false;

	else return true;
}

bool simple_number(int number)
{
	for (int i = 0; i <= number / 2; i++)
	{
	 if (number % i == 0) return false;
	}
	return true;
}