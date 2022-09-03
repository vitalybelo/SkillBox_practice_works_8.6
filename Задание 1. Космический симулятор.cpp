#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    float jetMass;  // weight of jet in kgs
    float jetForce; // traction force in Newtons
    float jetTime;  // time in seconds from jet turn ON to jet turn OFF

    do {
        cout << "Введите массу корабля (кг) = ";
        cin >> jetMass;
    } while (jetMass <= 0);
    do {
        cout << "Введите силу тяги (кг*м/c^2) = ";
        cin >> jetForce;
    } while (jetForce <= 0);
    do {
        cout << "Введите число секунд полета (c)= ";
        cin >> jetTime;
    } while (jetTime <= 0);

    //float result = ((jetForce / jetMass) * (jetTime * jetTime)) / 2;
    float result = ((jetForce / jetMass) * pow(jetTime,2)) / 2;

    cout << "Обеспечено метров полета = " << fixed << result << endl;

    return 0;
}