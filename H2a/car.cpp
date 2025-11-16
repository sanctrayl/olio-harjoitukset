#include "car.h"
#include <iostream>

void Car::setBrand(std::string newBrand) {
    brand = newBrand;
}

void Car::setModel(std::string newModel) {
    model = newModel;
}

void Car::setYearModel(int newYear) {
    yearModel = newYear;
}

void Car::printData() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << yearModel << std::endl;
}
