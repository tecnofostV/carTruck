#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int year;

public:
    Car(std::string brand, int year);

    void display();
};

#endif 