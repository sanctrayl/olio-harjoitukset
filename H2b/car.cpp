#include "car.h"
#include <iostream>

Car::Car(std::string newBrand, std::string newModel, int newYear)
{
    brand = newBrand;
    model = newModel;
    yearModel = newYear;
}

void Car::printData() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << yearModel << std::endl;
}
