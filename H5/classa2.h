#ifndef CLASSA2_H
#define CLASSA2_H

#include "classb.h"
#include <string>
using namespace std;

class ClassA2 : public ClassB
{
public:
    ClassA2(ClassB&);
    string getBinfo();
    void setBinfo(string);

private:
    ClassB &refB;
};

#endif // CLASSA2_H
