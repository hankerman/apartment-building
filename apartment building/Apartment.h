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

	void addHuman(int j); // j - ����������� ��������
	Human createHuman(int i); // i - ����������� ��������
	void print();
};

