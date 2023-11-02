#include <iostream>
#include <time.h>

using namespace std;

void fill_and_show_array(int [], int);
void fill_and_show_ArrRange(int[], int, int, int);

int main() {
	
	srand(time(NULL));

	const int length = 10;
	int arr[length] = {};

	int min = -5;
	int max = 5;

	fill_and_show_array(arr, length);

	cout << "\n";

	fill_and_show_ArrRange(arr, length);

	return 0;

}


void fill_and_show_array(int qarr[], int length) {
	for (int i = 0; i < length; i++)
	{
		qarr[i] = rand() % 100;
		cout << qarr[i] << ' ';
	}
}


void fill_and_show_ArrRange(int qarr[], int length, int min = 0, int max = 100) {
	for (int i = 0; i < length; i++)
	{
		qarr[i] = rand() % (max - min + 1) + min;
		cout << qarr[i] << ' ';
	}
}