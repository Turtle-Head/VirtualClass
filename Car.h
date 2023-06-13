#pragma once
#include <string>
#include "Vehicle.h"
class Car : public Vehicle {
public:
    Car(const std::string make, const std::string maodel, int year);

    void drive() override;     // overrriding pure virtual function
    void honk() override;      // overrriding pure virtual function
    Car() = default;



};

