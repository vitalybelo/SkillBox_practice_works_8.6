#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian_Russia.1251");

    /*
     *     max = (a + b)/2 + abs(a-b)/2
           min = (a + b)/2 - abs(a-b)/2
           ������ ������� �������� ������ ��� ����� � ��������� �������.
    */
    float value1;
    float value2;

    cout << "������� ������ ����� = ";
    cin >> value1;
    cout << "������� ������ ����� = ";
    cin >> value2;

    cout << "\n����� 1 (������������ �� ���������) = " << (value1 + value2) / 2 + abs(value1 - value2) / 2;
    cout << "\n����� 2 (����������� �� ���������) = " << (value1 + value2) / 2 - abs(value1 - value2) / 2;

    return 0;
}