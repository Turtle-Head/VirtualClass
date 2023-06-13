#include "Truck.h"
#include <iostream>

Truck::Truck(std::string name, std::string maodel, int year) : Vehicle(make, model, year) {}

void Truck::drive() {
	std::cout << "Driving a Truck...\n";
}

void Truck::pullTrailer()
{
	std::cout << "Puling a trailer...\n";
}

void Truck::honk() {
	std::cout << "Honkity Honk Honk!\n";
}

