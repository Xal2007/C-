#include<iostream>
#include<time.h>

using namespace std;

struct POINT 
	{
		int x;
		int y;
	};

int main()
{
	srand(time(NULL));

	POINT point1;

	point1.x = 2;
	point1.y = 3;

	POINT point2 = { 51,22 };



}
