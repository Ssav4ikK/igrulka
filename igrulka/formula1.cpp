#include "header.h"

void formula11() {
    setlocale(LC_ALL, "RU");
    srand(time(0));
    const short n = 12;
    char block = '_';
    char mas1[n], mas2[n];
    int win1 = 0, win2 = 0;
    int bomb = rand() % (n - 2) + 1;
    int trap = rand() % (n - 4) + 3;

    for (int i = 0; i < n; i++) {
        mas1[i] = block;
        mas2[i] = block;
    }
    mas1[win1] = 'O';
    mas2[win2] = 'O';

    for (int i = 0; i < n; i++) cout << mas1[i];
    cout << endl;
    for (int i = 0; i < n; i++) cout << mas2[i];
    cout << endl;

    bool stop = false;
    int plus1, plus2;

    while (!stop) {
        cout << "Игрок 1, введите количество клеток (1 или 2): ";
        cin >> plus1;
        if (plus1 != 1 && plus1 != 2) plus1 = 1;

        cout << "Игрок 2, введите количество клеток (1 или 2): ";
        cin >> plus2;
        if (plus2 != 1 && plus2 != 2) plus2 = 1;

        win1 += plus1;
        win2 += plus2;

        bool exploded1 = (win1 == bomb);
        bool exploded2 = (win2 == bomb);

        if (exploded1 && exploded2) {
            cout << "Оба игрока взорвались\nНичья!" << endl;
            stop = true;
        }
        else if (exploded1) {
            cout << "Игрок 1 взорвался\nИгрок 2 победил!" << endl;
            stop = true;
        }
        else if (exploded2) {
            cout << "Игрок 2 взорвался\nИгрок 1 победил!" << endl;
            stop = true;
        }

        if (stop) break;

        if (win1 == trap) win1 = max(0, win1 - 3);
        if (win2 == trap) win2 = max(0, win2 - 3);

        if (win1 >= n) win1 = n - 1;
        if (win2 >= n) win2 = n - 1;

        for (int i = 0; i < n; i++) {
            mas1[i] = block;
            mas2[i] = block;
        }
        mas1[win1] = 'O';
        mas2[win2] = 'O';

        for (int i = 0; i < n; i++) cout << mas1[i];
        cout << endl;
        for (int i = 0; i < n; i++) cout << mas2[i];
        cout << endl;

        if (win1 == n - 1 && win2 == n - 1) {
            cout << "Оба игрока дошли до финиша\nНичья!" << endl;
            stop = true;
        }
        else if (win1 == n - 1) {
            cout << "Игрок 1 победил!" << endl;
            stop = true;
        }
        else if (win2 == n - 1) {
            cout << "Игрок 2 победил!" << endl;
            stop = true;
        }
    }
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");
}
