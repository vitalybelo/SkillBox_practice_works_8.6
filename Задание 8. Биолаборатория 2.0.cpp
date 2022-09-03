#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");

    // Что оценивается: Количество измеряется в целых числах !!!
    // Количеством в постановке называется только количество коринебактерий
    // остальные параметры - капли, концентрация и т.д. )) если нужно все
    // сделать через int - переделаю (но там все скучно выходит, пробовал)
    int i = 1, valueNw;
    float valueW, valueD, valueN, valueDW;

    cout << "Опыт над чашкой Петри (дубль 2):\n";
    cout << "Нужно добавить в чашку \"W\" капель воды\n";
    cout << "Нужно добавить в чашку \"D\" капель антибиотика\n";
    cout << "И конечно же количество \"N\" коринебактерий\n------- погнали -----\n";
    do {
        cout << "Введите значения W, D, N (через пробел) = ";
        cin >> valueW >> valueD >> valueN;
    } while (valueW <= 0.0 || valueD <= 0.0 || valueN <= 0.0);

    cout.precision(3);
    do {
        valueDW = valueD / valueW;
        if (valueDW < 2) {
            valueN = 2 * valueN - valueN * valueDW;
        } else valueN = 0.0;

        valueNw = round(valueN);
        valueD -= valueD / 5; // 20% off

        cout << "\nпосле минуты № " << i++ << "  концентрация D/W = " << fixed;
        cout << valueDW << " количество бактерий = " << valueNw;
        //cout << " (остаток D = " << valueD << ")";

    } while ( i <=20 && valueNw > 0);

    cout << endl;
    return 0;
}