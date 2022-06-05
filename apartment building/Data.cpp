#include "Data.h"

Data::Data(int day, int mount, int year)
{
	this->day = day;
	this->mount = mount;
	this->year = year;
}

void Data::print()
{
	cout << "Day - " << day << " Mount - " << mount << " Year - " << year << endl;
}


