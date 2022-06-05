#pragma once
#include "Human.h"
class Apartment
{
private:
	Human* humans = nullptr;
	int count_humans;
public:
	Apartment(int count_humans);
	Apartment() : Apartment{ 1 } {};
	~Apartment();

	void addHuman(int j); // j - индификатор человека
	Human createHuman(int i); // i - индификатор человека
	void print();
};

