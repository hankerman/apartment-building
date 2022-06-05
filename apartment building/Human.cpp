#include "Human.h"

Human::Human(int number, string surname, string name, string patronymic, int day, int mount, int year)
{
	this->number = number;
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	Data data1(day, mount, year);
	this->data = data1;
}

void Human::print()
{
	cout << "number - " << number << endl;
	cout << "surname - " << surname << endl;
	cout << "name - " << name << endl;
	cout << "patronymic - " << patronymic << endl;
	this->data.print();
	cout << endl;
}
