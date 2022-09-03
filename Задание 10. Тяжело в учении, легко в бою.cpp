#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");

    /*
     *     max = (a + b)/2 + abs(a-b)/2
           min = (a + b)/2 - abs(a-b)/2
           Данное решение возможно только для чисел с плавающей запятой.
    */
    float value1;
    float value2;

    cout << "Введите первое число = "; cin >> value1;
    cout << "Введите второе число = "; cin >> value2;

    cout << "\nОТВЕТ 1 (максимальное из введенных) = ";
    cout << (value1 + value2) / 2 + abs(value1 - value2) / 2;
    cout << "\nОТВЕТ 2 (минимальное из введенных) = ";
    cout << (value1 + value2) / 2 - abs(value1 - value2) / 2;

    return 0;
}