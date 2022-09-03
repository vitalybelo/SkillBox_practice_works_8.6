#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    float epsilon = 0.001;
    int health; // health of Ork
    do {
        cout << "Введите уровень здоровья персонажа (0 до 100) = ";
        cin >> health;
    } while (health < 0 || health > 100);
    float orkHealth = (float) health / 100.0;

    int magics; // health of Ork
    do {
        cout << "Введите уровень магии персонажа (0 до 100) = ";
        cin >> magics;
    } while (magics < 0 || magics > 100);
    float orkMagics = (float) magics / 100.0;

    cout << endl;
    int power;
    float fightBall;    // power of dropped ball
    do {
        SetConsoleTextAttribute(hConsole, 1);
        do {
            cout << "Введите мощность выстрела (0 до 100) = ";
            cin >> power;
        } while (power < 0 || power > 100);
        fightBall = (float) power / 100.0;

        fightBall = fightBall * (1.00 - orkMagics);
        orkHealth -= fightBall;

        SetConsoleTextAttribute(hConsole, 10);
        cout << "\tУровень потерь от выстрела = " << fixed << fightBall << endl;
        cout << "\tУровень здоровья орка = " << fixed << orkHealth << endl;

    } while ((orkHealth - 0.00) > epsilon);

    cout << "\nGAME OVER\n";
    return 0;
}