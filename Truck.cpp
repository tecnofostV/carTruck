#include "Truck.hpp"
#include <iostream>
#include <string>

Truck::Truck(std::string model, double capacity) {
    this->model = model;
    this->capacity = capacity;
}

void Truck::display() {
    std::cout << "Truck Model: " << model << std::endl;
    std::cout << "Capacity: " << capacity << " tons" << std::endl;
}