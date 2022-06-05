#include "Apartment.h"

Apartment::Apartment(int count_humans)
{
	this->count_humans = count_humans;
	this->humans = new Human[count_humans];
}

Apartment::~Apartment()
{
	delete[] humans;
}

void Apartment::addHuman(int j)
{
	Human* temp = new Human[count_humans + 1];
	for (int i = 0; i < count_humans; i++) {
		temp[i] = humans[i];
	}
	temp[count_humans] = createHuman(j);
	delete[] humans;
	count_humans++;
	humans = new Human[count_humans];
	for (int i = 0; i < count_humans; i++) {
		humans[i] = temp[i];
	}
}

Human Apartment::createHuman(int i)
{
	
	int number = i;	
	string surname;
	string name;
	string patronymic;
	int day, mount, year;

	cout << "Enter surname - ";
	cin >> surname;
	cout << "Enter name - ";
	cin >> name;
	cout << "Enter patronymic - ";
	cin >> patronymic;
	cout << "Enter day - ";
	cin >> day;
	cout << "Enter mount - ";
	cin >> mount;
	cout << "Enter year - ";
	cin >> year;
	Human temp(number, surname, name, patronymic, day, mount, year);

	return temp;
}

void Apartment::print()
{
	cout << "-----------------------------------------------" << endl;
	for (int i = 0; i < count_humans; i++) {
		humans[i].print();
		cout << endl;
	}
	cout << "-----------------------------------------------" << endl;
}
