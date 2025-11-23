#ifndef DOG_H
#define DOG_H
#include <iostream>

using namespace std;
#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    virtual void callOut() override;
};

#endif // DOG_H
