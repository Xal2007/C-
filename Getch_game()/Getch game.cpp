#include<iostream>
#include<time.h>
#include<string.h>
#include<conio.h>

using namespace std;

void show(int arr[][10]);

int main()
{
	int arr[10][10]{};
	int x = 5, y = 5;
	arr[x][y] = 1;
	show(arr);

	int key{};

	while(true)
	{
		key = _getch();
		if (key == 'w' || key == 'W')
		{
			swap(arr[x][y], arr[x + 1][y]);
			x--;
		}
	}
}

void show(int arr[][10]) 
{

for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++)
	{
		if (arr[i][j] == 0)
		{
			cout << char(176) << char(176);
		}
		else
		{
			cout << char(219) << char(219);
		}
	}
}

}