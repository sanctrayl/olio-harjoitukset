#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    carList.emplace_back("Volkswagen", "Beetle", 1972);
    carList.emplace_back("Mercedes-Benz", "300SE", 1961);
    carList.emplace_back("Porsche", "992 GT3", 2021);

    carList[1].printData();

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
    return 0;
}
