#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    float cubeXYZ = 5.00;
    float barX, barY, barZ;

    cout << "Введите размер бруска (X Y Z через пробел) = ";
    cin >> barX >> barY >> barZ;

    int numCubes = floor (barX / cubeXYZ) * floor(barY / cubeXYZ) * floor(barZ / cubeXYZ);

    cout.precision (2);
    cout << endl << "Из бруска размером ( " << fixed << barX << " * " << barY ;
    cout << " * " << barZ << " ) изготовлено кубиков = " << numCubes << endl;

    int setCubes = 0;
    int nextFlat = 2;
    int nextSets = 8;

    while (numCubes >= nextSets) {
        setCubes = pow(nextFlat,3);
        nextSets = pow((++nextFlat),3);
    }

    setCubes > 1 ?  cout << "Из них можно составить набор из " << setCubes << " кубиков\n\n" :
    cout << "Из них нельзя составить набор\n\n";
    return 0;
}