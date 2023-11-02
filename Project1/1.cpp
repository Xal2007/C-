#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] =
	{
		{     },
		{     },
		{     },
		{     }
	};

	for (int i = 0;i < 4;i++)
		for(int j = 0;j < 4;j++)
		{
			arr[i][j] = 11 + j + (10 * i);
		}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}