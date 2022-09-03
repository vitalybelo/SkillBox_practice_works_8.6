#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");

    int fileSize;
    do {
        cout << "укажите размер файла для скачивания (Mbs) = ";
        cin >> fileSize;
    } while (fileSize <= 0 );

    int dowloadSpeed;
    do {
        cout << "укажите скорость интернет соединения (Mbs/sec) = ";
        cin >> dowloadSpeed;
    } while (dowloadSpeed <= 0 );
    cout << endl;

    for (int i = 1, n = 0; n < fileSize; i++) {
//        n += dowloadSpeed;
//        if (n > fileSize) n = fileSize;
        for (int x = 0; x < dowloadSpeed && n < fileSize; x++, n++); // real progress of download
        cout << "Прошло " << i << " сек. Скачано " << n << " из " << fileSize << " МБ ";
        cout  << "(" << ((100 * n) / fileSize) << "%) осталось " << (fileSize - n) << endl;
    }

    return 0;
}