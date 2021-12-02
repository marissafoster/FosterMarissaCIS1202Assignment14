#pragma once
#ifndef TRUCK_H_
#define TRUCK_H_
#include <iostream>
#include "Vehicle.h"
using namespace std;

// Create class Truck inherited from Vehicle
class Truck : public Vehicle
{
	int tow_cap;

public:

	// Default constructor
	Truck();

	// Parameterized constructor
	Truck(string m, int y, int t);

	// Getter for towing capacity
	int getTowCap();

	// Setter for towing capacity
	void setTowCap(int t);

	// Function to display information
	void displayInfo();
};

#endif