#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    float percentage = 8.40;
    float startAmplitude;
    do {
        cout << "Введите начальную амплитуду (см) = ";
        cin >> startAmplitude;
    } while (startAmplitude <= 0.1);

    float finalAmplitude;
    do {
        cout << "Введите амплитуду остановки (см) = ";
        cin >> finalAmplitude;
    } while (finalAmplitude > startAmplitude);

    cout.precision(6);
    float slowProgress = 1.00f - percentage/100.0f;
    for (int i = 1; startAmplitude > finalAmplitude; i++) {
        startAmplitude *= slowProgress;
        cout << "После колебания № "<< i << " амплитуда стала = " << fixed << startAmplitude << " см\n";
    }

    return 0;
}