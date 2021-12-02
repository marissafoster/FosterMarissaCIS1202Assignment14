#pragma once
#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
	int num_doors;

public:

	// Default constructor
	Car();

	// Parameterized constructor
	Car(string m, int y, int n);

	// Getter for number of doors
	int getDoors();

	// Setter for number of doors
	void setDoors(int n);

	// Function to display information
	void displayInfo();
};

#endif