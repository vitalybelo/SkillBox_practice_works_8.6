#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    double valueN, valueK, valueT;

    cout << "Сейф имеет\n\"N\" крутящихся ручек\n\"К\" положений на каждой ручке\n";
    cout << "\"T\" секунд нужно для проверки одной комбинации\n";
    cout << "Задайте эти значения и узнаете сколько времени\n";
    cout << "нужно чтобы перебрать все комбинации и открыть сейф\n\n";

    do {
        cout << "Введите значения N, K, T (через пробел) = ";
        cin >> valueN >> valueK >> valueT;
    } while ( valueN <= 0.0 || valueK <= 0.0 || valueT <= 0.0);

    // перемножаем "на.себя" значение положений каждой ручки К, столько раз,
    // сколько имеется ручек N, таким образом, количество комбинаций = K^N
    int crackTime = floor (pow (valueK, valueN) * valueT);

    cout << "\nПотребуется: ";
    if ((crackTime / 3600) > 0 ) {
        cout << crackTime / 3600 << " часов ";
        crackTime %= 3600;
    }
    cout << (crackTime / 60) << " минут ";
    cout << (crackTime % 60) << " секунд\n";

    return 0;
}