#include "Car.hpp"
#include <iostream>
#include <string>

Car::Car(std::string brand, int year) {
    this->brand = brand;
    this->year = year;
}

void Car::display() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Year: " << year << std::endl;
    }