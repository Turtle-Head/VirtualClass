#include "Car.h"
#include <iostream>


Car::Car(const std::string make, const std::string maodel, int year): Vehicle(make, model, year) {}


void Car::drive() {
	std::cout << "Driving a Car...\n";
}

void Car::honk() {
	std::cout << "Honk honk!\n";
}

