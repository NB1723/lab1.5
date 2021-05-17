#pragma once
#include <string>

using namespace std;

class Car
{
private:
	string model;
	int cylinder, power;

public:
	string getModel() const { return model; }
	int getCylinder() const { return cylinder; }
	int getPower() const { return power; }

	void setModel(string model);
	void setCylinder(int cylinder);
	void setPower(int power);

	void Init(string name, int cylinder, int power);
	void Display() const;
	void Read();
	string toString() const;
};