#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<time.h>

using namespace std;

int main() 
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (size_t i = 0; i < 255; i++) 
	{
		SetConsoleTextAttribute(hConsole, i);
			cout << setw(5) << i;
		if (i % 15 == 0 && i != 0) cout << '\n';
	}
	SetConsoleTextAttribute(hConsole, 15);
}

