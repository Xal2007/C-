#include<iostream>
#include<iomanip>
#include<time.h>
#include<string>
#include<conio.h>

using namespace std;

enum KEYS 
	{
		UP = 72,
		DOWN = 80,
		LEFT = 75,
		RIGHT = 77
	};

void fill_fields(short fields[][4]);
void show_fields(short fields[][4]);
void find_empty_cell(short fields[][4], short& x, short& y); 
void move(short fields[][4], short& x, short& y,unsigned char key);

int main()
{
	short game_field[4][4]{};
	short x{}, y{};


	fill_fields(game_field);
	show_fields(game_field);
	find_empty_cell(game_field, x, y);

	unsigned char key{};

	while(true)
	{
		key = _getch();
		key = _getch();

		move(game_field, key);
	
	}
}

void fill_fields(short fields[][4])
{
	short n = 1;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			 fields[i][j] = n++;
		}
	}
}

void show_fields(short fields[][4])
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{

		}
	}
}

void find_empty_cell(short fields[][4], short& x, short& y) 
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (fields[i][j] == 0) 
			{
				x = i;
				y = j;
			}
		}
	}
}

void move(short fields[][4], short& x, short& y, unsigned char key)
{
	switch (key)
	{
	case UP:
		if (x<3)
		{
		 break;
		 swap(fields[x][y], fields[x+1][y]);
		}			 
	case DOWN:	
		if (x != 0)
		{
			swap(fields[x][y], fields[x - 1][y]);
			break;
		}
	case LEFT:		
		if (y < 3)
		{
			swap(fields[x][y], fields[x][y + 1]);
			break;
		}
	case RIGHT:
		if (y != 0)
		{
			swap(fields[x][y], fields[x][y - 1]);
			break;
		}
	}
}