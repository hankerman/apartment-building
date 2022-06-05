#pragma once
#include <iostream>
using namespace std;
class Data
{
private:
	int day;
	int mount;
	int year;
public:
	Data(int day, int mount, int year);
	Data() : Data { 1, 1, 1990 }{};
	void print();
};

