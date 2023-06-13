#pragma once
#include <string>

class Vehicle {
public:
	Vehicle(const std::string& make, const std::string& model, int yearl);
	virtual void drive() = 0;	// pure virtual function
	virtual void honk() = 0;	// pure virtual function
	std::string getMake() const;
	std::string getModel() const;
	int getYear() const;
	//Vehicle() = default;

protected:
	std::string make;
	std::string model;
	int year;
	
};

