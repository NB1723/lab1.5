#pragma once
#include <string>
#include "Car.h"

using namespace std;

class Lorry
{
private:
	int capacity_of_car;
	Car car;
public:
	int getCapacity_of_car() const { return capacity_of_car; }
	Car getCar() const { return car; }

	void setCapacity_of_car(int capacity_of_car);
	void setCar(Car car) { this->car = car; }

	void Init(int capacity_of_car, Car car);
	void Display() const;
	void Read();
};