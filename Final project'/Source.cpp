#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

struct Car
{
	char brand[15];
	char model[10];
	char colour[10];
	int manufactoring_date;
	short price;
};

//struct Client 
//{
// 
//
//};
//
//struct Contract
//{
//
//
//};

char menu();
void action(char, Car* cars);
Car* list_of_cars();
void show_list_of_cars(Car* cars);

int main()
{
	srand(time(NULL));

	char action_func = menu();

	Car Mercedes = {"Mercedes","C200","Red",2007,200};
	Car KIA = {"KIA","Optima","Blue",2013,140};
	Car Opel = {"Opel","Astra","Grey",2015,105};
	Car BMW = {"BMW","M5","Yellow",2019,220};
	Car Toyota = {"Toyota","Prado","Black",2014,240};
	Car Nissan = {"Nissan","Sunny","Green",2017,155};
	Car* carss = new Car[6]{
		Mercedes, KIA,Opel,BMW,Toyota, Nissan
	};				  
	action(action_func, carss);
		//				  
		/*cout << MercedesNissan.brand << Mercedes.model << Mercedes.colour << Mercedes.manufactoring_date << Mercedes.price;
	cout << KIA.brand << KIA.model << KIA.colour << KIA.manufactoring_date << KIA.price;*/
}

char menu()
{
	cout << setw(65) << "Rent a car";

	cout << "\n\n1) List of cars" << endl;
	cout << "\n\n2) Add a car" << endl;
	cout << "\n\n3) Remove car" << endl;
	cout << "\n\n4) Find car" << endl;
	cout << "\n\n5) List of contacts" << endl;
	cout << "\n\n6) Remove contacts" << endl;
	cout << "\n\n7) Exit program" << endl;

	char action = {};

	cout << "\n\nChoose action...";
	cin >> action;

	return action;
}

void action(char action1 , Car* cars)
{
	if (action1 == '1')
	{
		show_list_of_cars(cars);
	}
	else if (action1 == '2')
	{

	}
	else if (action1 == '3')
	{

	}
	else if (action1 == '4')
	{

	}
	else if (action1 == '5')
	{

	}
	else if (action1 == '6')
	{

	}
	else if (action1 == '7')
	{
		cout << "\nSee you soon" << endl;
		exit(0);
	}
}

Car* list_of_cars()
{
	Car Mercedes = { "Mercedes","C200","Red",2007,200 };
	Car KIA = { "KIA","Optima","Blue",2013,140 };
	Car Opel = { "Opel","Astra","Grey",2015,105 };
	Car BMW = { "BMW","M5","Yellow",2019,220 };
	Car Toyota = { "Toyota","Prado","Black",2014,240 };
	Car Nissan = { "Nissan","Sunny","Green",2017,155 };

	Car cars[6] = { Mercedes ,KIA ,Opel,BMW,Toyota,Nissan };

	return cars;
}

void show_list_of_cars(Car* carss ){	

	for (int i = 0; i < 6; i++)
	{
		cout << carss[i].brand << ',' <<
			carss[i].model << ',' <<
			carss[i].colour << ',' <<
			carss[i].manufactoring_date << ',' <<
			carss[i].price << "AZN.";
		cout << '\n';
	}
}