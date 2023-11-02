#include<iostream>
#include<time.h>

using namespace std;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
	int (*calc)(int, int) = nullptr;

	int first_value{};
	int second_value{};

	cout << "Enter first number:";
	cin >> first_value;

	cout << "\nEnter second number:";
	cin >> second_value;

	enum operations
	{
		ADD = 1,
	    SUBTRACT,
		MULTIPLY,
		DIVIDE
	};

	int menuItem{};

	cout << "\nEnter operation: ";
	cin >> menuItem;

	switch (menuItem)
	{
	case 1:
		int (*calc)(int, int) = add;
	case 2:
		int (*calc)(int, int) = subtract;
	case 3:
		int (*calc)(int, int) = multiply;
	case 4:
		int (*calc)(int, int) = divide;
	}

}

int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{ 
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

int divide(int num1, int num2)
{
	return num1 / num2;
}