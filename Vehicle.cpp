#include <iostream>
#include "Vehicle.h"
using namespace std;

// Default constructor
Vehicle::Vehicle()
{
	manufacturer = "";
	year_built = 0;
}

// Parameterized constructor
Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year_built = y;
}

// Getter for manufacturer
string Vehicle::getMan()
{
	return manufacturer;
}

// Getter for year built
int Vehicle::getYear()
{
	return year_built;
}

// Setter for manufacturer
void Vehicle::setMan(string m)
{
	manufacturer = m;
}

// Setterfor year built
void Vehicle::setYear(int y)
{
	year_built = y;
}

// Function to display information
void Vehicle::displayInfo()
{
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getMan() << endl;
	cout << "Year Built: " << getYear() << endl;
}
