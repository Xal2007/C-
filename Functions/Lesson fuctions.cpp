#include <iostream>
#include <time.h>

using namespace std;

void output_range(int first_num, int second_num) {
	for (int i = first_num; i <= second_num; i++)
	{
		cout << i << " ";
	}
}


int main()
{
	srand(time(NULL));



	output_range(2,6);
}