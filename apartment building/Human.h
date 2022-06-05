#pragma once
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

class Human
{
private:
	int number;
	string surname;
	string name;
	string patronymic;
	Data data;
	

public:
	Human(int number, string surname, string name, string patronymic, int day, int mount, int year);
	Human() : Human{ 1, "Bobrov", "Bobr", "Bobrovich", 1, 1, 1990 } {};
	void print();
};

