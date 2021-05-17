#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

void Car::setModel(string value)
{
	model = value;
}

void Car::setCylinder(int  value)
{
	if (value > 0)
		cylinder = value;
	else
		cylinder = 0;
}

void Car::setPower(int  value)
{
	if (value > 0)
		power = value;
	else
		power = 0;
}

void Car::Init(string model, int cylinder, int power)
{
	setModel(model);
	setCylinder(cylinder);
	setPower(power);
}

void Car::Display() const
{
	cout << endl;
	cout << "model = " << model << endl;
	cout << "cylinder = " << cylinder << endl;
	cout << "power ( in kW ) = " << power << endl;
}

void Car::Read()
{
	string model;
	int cylinder;
	int power;
	cout << endl;
	cout << "model = ? "; cin >> model;
	cout << " Your value must be positive!" << endl;
	cout << "cylinder = ? "; cin >> cylinder;
	cout << "power ( in kW ) = ? "; cin >> power;
	Init(model, cylinder, power);
}