#include <iostream>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

// Default constructor
Car::Car() : Vehicle()
{
	num_doors = 0;
}

// Parameterized constructor
Car::Car(string m, int y, int n) : Vehicle(m, y)
{
	num_doors = n;
}

//  Getter for number of doors
int Car::getDoors()
{
	return num_doors;
}

// Setter for number of doors
void Car::setDoors(int n)
{
	num_doors = n;
}

// Function to display information
void Car::displayInfo()
{
	Vehicle::displayInfo();
	// Print number of doors
	cout << "Doors: " << getDoors() << endl;
}

