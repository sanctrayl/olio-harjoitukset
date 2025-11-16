#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car myCar;

    myCar.setBrand("Volkswagen");
    myCar.setModel("Golf");
    myCar.setYearModel(1995);

    myCar.printData();

    std::cout << "..." << std::endl;

    Rectangle* pRect = new Rectangle();

    pRect->setWidth(18.0);
    pRect->setHeight(9.0);

    std::cout << "Area: " << pRect->getArea() << std::endl;
    std::cout << "Circum: " << pRect->getCircum() << std::endl;

    delete pRect;

    std::cout << "..." << std::endl;

    std::unique_ptr<Student> pStudent = std::make_unique<Student>();

    pStudent->setName("Aku Ankka");
    pStudent->setStudentNumber(43815);
    pStudent->setAverage(7.5);

    std::cout << "Nimi: " << pStudent->getName() << std::endl;
    std::cout << "Numero: " << pStudent->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << pStudent->getAverage() << std::endl;

    return 0;
}
