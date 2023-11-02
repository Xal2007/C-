#include<iostream>

using namespace std;

void fillArray(int* arr, int length);
void showArray(int* arr, int length);
int* addElement(int* arr, int length, int element);

int main() {
	srand(time(NULL));

	int length{};
	cin >> length;
	int* dynamicArr = new int[length];
	fillArray(dynamicArr, length);
	showArray(dynamicArr, length);

	dynamicArr = addElement(dynamicArr, length, 36);
	showArray(dynamicArr, length);
}

void fillArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		*(arr + i) = rand() % 100 + 10;
	}
}
void showArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << '\n';
}
int* addElement(int dynamicArr,int length, int element)
{


}