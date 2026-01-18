#include "header.h"
void tictoe1() {
    setlocale(LC_ALL, "Russian");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char ticktoe[3][3];
    short num = 1;
    short player = 0;
    bool exit = false;

    for (short i = 0; i < 3; i++) {
        for (short j = 0; j < 3; j++) {
            ticktoe[i][j] = '0' + num;
            num++;
        }
    }

    while (!exit) {
        system("CLS");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "-------" << endl;
        for (short i = 0; i < 3; i++) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            cout << "|";
            for (short j = 0; j < 3; j++) {
                if (ticktoe[i][j] == 'X') {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << ticktoe[i][j];
                }
                else if (ticktoe[i][j] == 'O') {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    cout << ticktoe[i][j];
                }
                else {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
                    cout << ticktoe[i][j];
                }
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                cout << "|";
            }
            cout << endl << "-------" << endl;
        }

        short choose;
        if (player % 2 == 0) {
            cout << "На какую клетку хотите поставить крестик? \n";
            cin >> choose;
        }
        else {
            cout << "На какую клетку хотите поставить нолик? \n";
            cin >> choose;
        }

        bool placed = false;
        for (short i = 0; i < 3; i++) {
            for (short j = 0; j < 3; j++) {
                if (ticktoe[i][j] == '0' + choose) {
                    ticktoe[i][j] = (player % 2 == 0 ? 'X' : 'O');
                    placed = true;
                }
            }
        }

        if (!placed) {
            cout << "Так нельзя, это не по правилам.";
            Sleep(1000);
            continue;
        }

        for (short i = 0; i < 3; i++) {
            if (ticktoe[i][0] == ticktoe[i][1] && ticktoe[i][1] == ticktoe[i][2]) {
                cout << (ticktoe[i][0] == 'X' ? "Первый Игрок побеждает" : "Второй Игрок побеждает");
                exit = true;
            }
            if (ticktoe[0][i] == ticktoe[1][i] && ticktoe[1][i] == ticktoe[2][i]) {
                cout << (ticktoe[0][i] == 'X' ? "Первый Игрок побеждает" : "Второй Игрок побеждает");
                exit = true;
            }
        }

        if ((ticktoe[0][0] == ticktoe[1][1] && ticktoe[1][1] == ticktoe[2][2]) ||
            (ticktoe[0][2] == ticktoe[1][1] && ticktoe[1][1] == ticktoe[2][0])) {
            cout << (ticktoe[1][1] == 'X' ? "Первый Игрок побеждает" : "Второй Игрок побеждает");
            exit = true;
        }

        player++;
        if (!exit && player == 9) {
            cout << "Ничья";
            exit = true;
        }
    }
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");
}