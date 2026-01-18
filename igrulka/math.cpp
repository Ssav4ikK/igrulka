#include "Header.h"

void math1() {
    setlocale(LC_ALL, "RU");
    srand(static_cast<unsigned>(time(0)));

    short a = rand() % 100;
    short b = rand() % 100;
    while (b == 0) b = rand() % 100; // защита от деления на ноль

    short choose;
    choose = (a % b == 0) ? 1 + rand() % 4 : 1 + rand() % 3;

    short result;
    switch (choose) {
    case 1:
        result = a + b;
        cout << a << " + " << b << " = ?\n";
        break;
    case 2:
        result = a - b;
        cout << a << " - " << b << " = ?\n";
        break;
    case 3:
        result = a * b;
        cout << a << " * " << b << " = ?\n";
        break;
    case 4:
        result = a / b;
        cout << a << " / " << b << " = ?\n";
        break;
    }

    short guess1 = -1, guess2 = -1;
    bool correct = false;

    while (!correct) {
        cout << "Игрок 1 Нажмите R\nИгрок 2 Нажмите L\n";
        char fastest = _getch();

        if (toupper(fastest) == 'R') {
            cout << "Игрок 1 введите ответ: ";
            cin >> guess1;
            if (guess1 == result) {
                cout << "Игрок 1 выиграл\n";
                correct = true;
            }
        }
        else if (toupper(fastest) == 'L') {
            cout << "Игрок 2 введите ответ: ";
            cin >> guess2;
            if (guess2 == result) {
                cout << "Игрок 2 выиграл\n";
                correct = true;
            }
        }
    }
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");
}