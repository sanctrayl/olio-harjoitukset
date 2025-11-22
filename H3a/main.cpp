#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef objectChef("Gordon Ramsay");

    objectChef.makeSalad();
    objectChef.makeSoup();

    ItalianChef objectItalianChef("Anthony Bourdain");
    objectItalianChef.makeSalad();
    objectItalianChef.makeSoup();
    objectItalianChef.makePasta();
    cout << "name of the Italian Chef is " << objectItalianChef.getName() << endl;

    return 0;
}
