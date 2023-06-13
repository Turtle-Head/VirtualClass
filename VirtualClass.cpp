// VirtualClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"
#include <string>

int main()
{
	Vehicle* vehicle[2];
	vehicle[0] = new Car("Ford", "Mustang", 1969);
	vehicle[1] = new Truck("Ferd", "F-150", 2020);
	int size = sizeof(vehicle) / sizeof(vehicle[0]);

	for (size_t i = 0; i < size; i++) {
		vehicle[i]->drive();
		vehicle[i]->honk();
		std::cout << vehicle[i]->getMake() << " " << vehicle[i]->getModel() << " " << vehicle[i]->getYear() << "\n";
	}
}


