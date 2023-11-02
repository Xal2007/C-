#include <iostream>
#include <time.h>
using namespace std;
int main() {

srand(time(NULL));


#pragma region TASK 1
	int m[5]{ 2,5,6,7,1 };
	int n[5]{ 4,6,3,5,1 };
	int mn[5]{};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (m[i] == n[j])
			{
				mn[i] = m[i];
			}
			else
			{
				continue;
			}

		}

	}


	for (int i = 0; i < 5; i++)
	{
		cout << mn[i];
	}
	cout << '\n';
#pragma endregion


#pragma region TASK 5


	int arrrr[10]{};
	int min = -20;
	int max = 20;

	for (int i = 0; i < 10; i++) 
	{
		arrrr[i] = rand() % (max - min + 1) + min;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 9) {
			cout << arrrr[i] << '.';
		}
		else {
			cout << arrrr[i] << ',';
		}
	}
	cout << '\n';
	for (int i = 0; i < 10; i++)
	{
		if (arrrr[i] < 0)
		{
			arrrr[i] = -arrrr[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 9) {
			cout << arrrr[i] << '.';
		}
		else {
			cout << arrrr[i] << ',';
		}
	}
#pragma endregion

}