#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;
public:
    Car();
    Car(string b, string m);

    void setEngine();
    void setWheels();
    void printDetails();

    string getModel() const;
    void setModel(string m);
    string getBrand() const;
    void setBrand(string b);
};

#endif // CAR_H
