#include "header.h"
void guess1() {
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));
    short a = 0 + rand() % 100;
    cout << "Промежуток от 0 до 100: \n";
    Sleep(1500);
    system("CLS");
    bool access = false;
    short p1, p2;
    while (access != true) {
        cout << "Игрок 1 угадайте число, которое максимально близко к победному:  ";
        cin >> p1;
        if (p1 <= 100 && p1 >= 0) {
            system("CLS");
            access = true;
        }
    }
    access = false;
    while (access != true) {
        system("CLS");
        cout << "Игрок 2 угадайте число, которое максимально близко к победному:  ";
        cin >> p2;
        system("CLS");
        if (p2 <= 100 && p2 >= 0) {
            system("CLS");
            access = true;
        }
    }
    short dist1 = abs(p1 - a);
    short dist2 = abs(p2 - a);
    if (dist2 > dist1) {
        cout << " Игрок 1 победил. Загаданное число: " << a << endl;
    }
    else if (dist1 > dist2) {
        cout << " Игрок 2 победил. Загаданное число: " << a << endl;
    }
    else {
        cout << " Ничья. Загаданное число: " << a << endl;
    }
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");

}