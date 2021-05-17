#include "Car.h"
#include <iostream>
#include <string>
#include "Lorry.h"

using namespace std;

void Lorry::setCapacity_of_car(int  value) { capacity_of_car = value; }

void Lorry::Init(int capacity_of_car, Car car)
{
	setCar(car);
	setCapacity_of_car(capacity_of_car);
}

void Lorry::Display() const
{
	cout << "\nCar: " << endl;
	car.Display();
	cout << "Capacity of car ( in kg ) = " << capacity_of_car << endl;
}
void Lorry::Read()
{
	int  capacity_of_car;
	Car car;
	cout << endl;
	cout << "Car = ? " << endl;
	car.Read();
	cout << "Capacity of car ( in kg ) = ? "; cin >> capacity_of_car;
	Init(capacity_of_car, car);
}