#include<iostream>
#include<time.h>

using namespace std;

void fillMdArray(int*** arr);

//void showMdArray(int arr[][3], int row, int col);

int main()
{
	srand(time(NULL));

	int*** DynamicArray = new int** [3];

	DynamicArray[0] = new int*[3];
	DynamicArray[1] = new int*[3];
	DynamicArray[2] = new int*[3];

	DynamicArray[0][0] = new int [3];
	DynamicArray[0][1] = new int [3];
	DynamicArray[0][2] = new int [3];

	DynamicArray[1][0] = new int[3];
	DynamicArray[1][1] = new int[3];
	DynamicArray[1][2] = new int[3];

	DynamicArray[2][0] = new int[3];
	DynamicArray[2][1] = new int[3];
	DynamicArray[2][2] = new int[3];

	fillMdArray(DynamicArray);
	//showMdArray(DynamicArray, 3, 3);
}

void fillMdArray(int*** arr)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				arr[i][j][k] = rand() % 90 + 10;
			}
		}
	}
}

//void deleteMdArray(int** arr, int row, int col)
//{
//	delete[]
//}

//void showMdArray(int arr[][3], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}