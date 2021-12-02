#include <iostream>
#include "Vehicle.h"
#include "Truck.h"
using namespace std;

// Default constructor
Truck::Truck() : Vehicle()
{
	tow_cap = 0;
}

// Parameterized constructor
Truck::Truck(string m, int y, int t) : Vehicle(m, y)
{
	tow_cap = t;
}

// Getter for towing capacity
int Truck::getTowCap()
{
	return tow_cap;
}

// Setter for towing capacity
void Truck::setTowCap(int t){ 
	tow_cap = t;
}

// Function to display information
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}