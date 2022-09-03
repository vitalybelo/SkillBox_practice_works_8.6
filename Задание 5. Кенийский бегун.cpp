#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    int numberKM;
    do {
        cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? = ";
        cin >> numberKM;
    } while (numberKM < 1);
    cout << endl;

    int racePace;
    int progress = 0;
    for (int i = 1; i <= numberKM; i++) {
        do {
            cout << "Какой у тебя был темп на километре # " << i << " ? = ";
            cin >> racePace;
        } while (racePace < 1);
        progress += racePace;
    }
    float average = (float) progress / (float) numberKM;
    float minutes = floor(average / 60.00);
    float seconds = round(average - (minutes * 60));

    cout << endl;
    cout << "Твой средний темп за тренировку: " << minutes << " минут " << seconds << " секунд\n";

    return 0;
}