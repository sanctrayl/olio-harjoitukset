#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(std::string newBrand, std::string newModel, int newYear);
    void printData();
};

#endif
