#pragma once
#include "Vehicle.h"
class Truck : public Vehicle {
public:
    Truck(std::string name, std::string maodel, int year);
    void drive() override;
    void honk() override;
    void pullTrailer();


};

