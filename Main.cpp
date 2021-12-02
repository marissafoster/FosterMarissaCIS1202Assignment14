// Marissa Foster
// CIS1202 - 800
// Assignment 14

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

// Main function
int main()
{
	// Store manufacturer
	string m;

	// Store year built
	int y;

	// Store number of doors
	int n;

	// Store towing capacity
	int tc;

	cout << "Vehicle Program:" << endl;
	cout << endl << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	// Create Vehicle class object
	Vehicle v(m, y);

	// Print Vehicle information
	v.displayInfo();

	cout << endl << "Car: " << endl;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	cout << "Enter the number of doors: ";
	cin >> n;

	// Create Car class object
	Car c(m, y, n);

	// Print Car information
	c.displayInfo();

	cout << endl << "Truck: " << endl;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);

	cout << "Enter the year built: ";
	cin >> y;

	cout << "Enter the towing capacity: ";
	cin >> tc;

	// Create a Truck class object
	Truck t(m, y, tc);

	// Print Truck information
	t.displayInfo();

	return 0;
}