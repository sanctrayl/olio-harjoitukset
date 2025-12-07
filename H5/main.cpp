#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"

using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << "\nReferenssi" << endl;
    int b = 6;
    refA = b;
    pointerA = &b;
    cout << "refA:n uusi arvo: " << refA << endl;
    cout << "pointerA osoittaa nyt b:n osoitteeseen: " << pointerA << endl;

    cout << "\nOlio argumenttina" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "\nReferenssi argumenttina" << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
