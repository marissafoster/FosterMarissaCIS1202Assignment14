#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
using namespace std;

class Vehicle
{
	string manufacturer;
	int year_built;

public:

	// Default constructor
	Vehicle();

	// Parameterized constructor
	Vehicle(string m, int y);

	// Getter for manufacturer
	string getMan();

	// Getter for year built
	int getYear();

	// Setter for manufacturer
	void setMan(string m);

	// Setter for year built
	void setYear(int y);

	// Function to display information
	void displayInfo();
};

#endif