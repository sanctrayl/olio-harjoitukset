#ifndef CLASSA1_H
#define CLASSA1_H

#include "ClassB.h"
#include <string>

class ClassA1
{
public:
    ClassA1(ClassB);
    string getBinfo();
    void setBinfo(string);

private:
    ClassB objectB;
};

#endif // CLASSA1_H
