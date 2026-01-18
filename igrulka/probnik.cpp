#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cctype>
#include <windows.h>
#include <conio.h> 
#include "header.h"
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

// ========== Глобальные очки ==========
int scorePlayer1 = 0;
int scorePlayer2 = 0;

// ========== Правила и события ==========
void applyRule(int rule, int winner) {
    // winner: 1 или 2; правило в [1..5]
    switch (rule) {
    case 1: // победитель +1
        if (winner == 1) scorePlayer1++; else scorePlayer2++;
        break;
    case 2: // победитель +2
        if (winner == 1) scorePlayer1 += 2; else scorePlayer2 += 2;
        break;
    case 3: // проигравший теряет все
        if (winner == 1) scorePlayer2 = 0; else scorePlayer1 = 0;
        break;
    case 4: // игра наоборот: очко получает проигравший
        if (winner == 1) scorePlayer2++; else scorePlayer1++;
        break;
    case 5: // победитель теряет 2
        if (winner == 1) scorePlayer1 -= 2; else scorePlayer2 -= 2;
        break;
    default: break;
    }
}

int randomevent() {
    ShowRandom();
    system("CLS");
    short EventChoose = 1 + rand() % 5;
    cout << EventChoose << " ";
    switch (EventChoose) {
    case 1: cout << "Событие: Победитель получает +1 балл\n"; Sleep(2000); break;
    case 2: cout << "Событие: Победитель получает +2 балла\n"; Sleep(2000); break;
    case 3: cout << "Событие: Проигравший теряет все баллы\n"; Sleep(2000); break;
    case 4: cout << "Событие: Игра наоборот — очко получает проигравший\n"; Sleep(2000); break;
    case 5: cout << "Событие: Победитель теряет 2 балла\n"; Sleep(2000);  break;
    }
    Sleep(2000);
    return EventChoose;
}

// ========== Мини-игры ==========
// tictoe: возвращает 1/2/0 (победитель или ничья)
int tictoe() {
    setlocale(LC_ALL, "Russian");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char ticktoe[3][3];
    short num = 1;
    short player = 0;
    bool exitGame = false;

    for (short i = 0; i < 3; i++)
        for (short j = 0; j < 3; j++)
            ticktoe[i][j] = char('0' + num++);

    while (!exitGame) {
        system("CLS");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "-------" << endl;
        for (short i = 0; i < 3; i++) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            cout << "|";
            for (short j = 0; j < 3; j++) {
                if (ticktoe[i][j] == 'X') {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                }
                else if (ticktoe[i][j] == 'O') {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                }
                else {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
                }
                cout << ticktoe[i][j];
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                cout << "|";
            }
            cout << endl << "-------" << endl;
        }

        short choose;
        if (player % 2 == 0) cout << "На какую клетку поставить крестик? ";
        else cout << "На какую клетку поставить нолик? ";
        cin >> choose;

        bool placed = false;
        for (short i = 0; i < 3; i++) {
            for (short j = 0; j < 3; j++) {
                if (ticktoe[i][j] == char('0' + choose)) {
                    ticktoe[i][j] = (player % 2 == 0 ? 'X' : 'O');
                    placed = true;
                }
            }
        }

        if (!placed) {
            cout << "Так нельзя, это не по правилам.\n";
            Sleep(1500);
            continue;
        }

        // Проверка победы
        for (short i = 0; i < 3; i++) {
            if (ticktoe[i][0] == ticktoe[i][1] && ticktoe[i][1] == ticktoe[i][2]) {
                cout << (ticktoe[i][0] == 'X' ? "Первый Игрок побеждает\n" : "Второй Игрок побеждает\n");
                Sleep(2000);
                return (ticktoe[i][0] == 'X' ? 1 : 2);
            }
            if (ticktoe[0][i] == ticktoe[1][i] && ticktoe[1][i] == ticktoe[2][i]) {
                cout << (ticktoe[0][i] == 'X' ? "Первый Игрок побеждает\n" : "Второй Игрок побеждает\n");
                Sleep(2000);
                return (ticktoe[0][i] == 'X' ? 1 : 2);
            }
        }
        if ((ticktoe[0][0] == ticktoe[1][1] && ticktoe[1][1] == ticktoe[2][2]) ||
            (ticktoe[0][2] == ticktoe[1][1] && ticktoe[1][1] == ticktoe[2][0])) {
            cout << (ticktoe[1][1] == 'X' ? "Первый Игрок побеждает\n" : "Второй Игрок побеждает\n");
            Sleep(2000);
            return (ticktoe[1][1] == 'X' ? 1 : 2);
        }

        player++;
        if (player == 9) {
            cout << "Ничья\n";
            Sleep(2000);
            return 0;
        }
    }
    return 0;
}

// math: возвращает 1 или 2 (победитель), ничья не нужна
int math() {
    setlocale(LC_ALL, "RU");
    srand(static_cast<unsigned>(time(0)));

    short a = rand() % 100;
    short b = rand() % 100;
    while (b == 0) b = rand() % 100;

    short choose = (a % b == 0) ? 1 + rand() % 4 : 1 + rand() % 3;
    short result;
    switch (choose) {
    case 1: result = a + b; cout << a << " + " << b << " = ?\n"; break;
    case 2: result = a - b; cout << a << " - " << b << " = ?\n"; break;
    case 3: result = a * b; cout << a << " * " << b << " = ?\n"; break;
    case 4: result = a / b; cout << a << " / " << b << " = ?\n"; break;
    default: result = a + b; cout << a << " + " << b << " = ?\n"; break;
    }

    cout << "Игрок 1 нажмите R, Игрок 2 нажмите L\n";
    while (true) {
        int ch = _getch();
        if (toupper(ch) == 'R') {
            cout << "Игрок 1 введите ответ: ";
            int g; cin >> g;
            if (g == result) { cout << "Игрок 1 выиграл\n"; Sleep(2000); return 1; }
            else cout << "Неверно\n";
        }
        else if (toupper(ch) == 'L') {
            cout << "Игрок 2 введите ответ: ";
            int g; cin >> g;
            if (g == result) { cout << "Игрок 2 выиграл\n"; Sleep(2000); return 2; }
            else cout << "Неверно\n";
        }
    }
}

// rockpaper: возвращает 1/2/0
int rockpaper() {
    setlocale(LC_ALL, "RU");
    bool ok = false;
    short p1 = 0, p2 = 0;
    while (!ok) {
        cout << "Игрок 1\n 1) Камень\n 2) Ножницы\n 3) Бумага\n";
        cin >> p1;
        if (p1 < 1 || p1 > 3) { cout << "Выберите нормально\n"; Sleep(1500); system("CLS"); continue; }
        system("CLS");
        cout << "Игрок 2\n 1) Камень\n 2) Ножницы\n 3) Бумага\n";
        cin >> p2;
        if (p2 < 1 || p2 > 3) { cout << "Выберите нормально\n"; Sleep(1500); system("CLS"); continue; }
        ok = true;
    }
    if (p1 == p2) { cout << "Ничья\n"; Sleep(2000); return 0; }
    if (p1 == 1 && p2 == 2) { cout << "Игрок 1 побеждает: Камень > Ножницы\n"; Sleep(2000); return 1; }
    if (p1 == 2 && p2 == 1) { cout << "Игрок 2 побеждает: Камень > Ножницы\n"; Sleep(2000); return 2; }
    if (p1 == 2 && p2 == 3) { cout << "Игрок 1 побеждает: Ножницы > Бумага\n"; Sleep(2000); return 1; }
    if (p1 == 3 && p2 == 2) { cout << "Игрок 2 побеждает: Ножницы > Бумага\n"; Sleep(2000); return 2; }
    if (p1 == 3 && p2 == 1) { cout << "Игрок 1 побеждает: Бумага > Камень\n"; Sleep(2000); return 1; }
    if (p1 == 1 && p2 == 3) { cout << "Игрок 2 побеждает: Бумага > Камень\n"; Sleep(2000); return 2; }
    return 0;
}

int guess() {
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));
    int secret = rand() % 101;

    int p1, p2;
    cout << "Игрок 1, введите число от 0 до 100: ";
    cin >> p1;
    cout << "Игрок 2, введите число от 0 до 100: ";
    cin >> p2;

    int dist1 = abs(p1 - secret);
    int dist2 = abs(p2 - secret);

    if (dist1 < dist2) {
        cout << "Игрок 1 победил! Загаданное число: " << secret << endl;
        Sleep(3000);
        return 1;
    }
    else if (dist2 < dist1) {
        cout << "Игрок 2 победил! Загаданное число: " << secret << endl;
        Sleep(3000);
        return 2;
    }
    else {
        cout << "Ничья! Загаданное число: " << secret << endl;
        Sleep(3000);
        return 0;
    }
}

int formula1() {
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));

    const int track = 12;
    int pos1 = 0, pos2 = 0;
    int bomb = rand() % (track - 2) + 1;
    int trap = rand() % (track - 4) + 3;

    while (true) {
        system("CLS");

        // Рисуем трек - бомбы и ловушки скрыты
        cout << "Трек (длина: " << track << " позиций):" << endl;
        cout << "Старт ";
        for (int i = 0; i < track; i++) {
            if (i == pos1 && i == pos2) {
                cout << "[1&2]";
            }
            else if (i == pos1) {
                cout << "[P1]";
            }
            else if (i == pos2) {
                cout << "[P2]";
            }
            else {
                cout << "[__]";
            }

            if (i < track - 1) {
                cout << "---";
            }
        }
        cout << " Финиш" << endl << endl;

        cout << "P1 = Игрок 1 (текущая позиция: " << pos1 << ")" << endl;




        cout << "P2 = Игрок 2 (текущая позиция: " << pos2 << ")" << endl << endl;
        cout << "На дорожке скрыты: 1 бомба (B) и 1 ловушка (T)" << endl;
        cout << "Бомба взрывает игрока, ловушка отбрасывает на 3 позиции назад" << endl << endl;

        cout << "Игрок 1, шаг (1 или 2): ";
        int step1; cin >> step1;
        if (step1 != 1 && step1 != 2) step1 = 1;

        cout << "Игрок 2, шаг (1 или 2): ";
        int step2; cin >> step2;
        if (step2 != 1 && step2 != 2) step2 = 1;

        pos1 += step1;
        pos2 += step2;

        if (pos1 == bomb && pos2 == bomb) {
            PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME);
            Sleep(3000);
            cout << "Оба игрока взорвались на бомбе! Ничья!" << endl;
            Sleep(3000);
            return 0;
        }
        else if (pos1 == bomb) {
            PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME);
            Sleep(3000);
            cout << "Игрок 1 взорвался на бомбе! Победил Игрок 2!" << endl;
            Sleep(3000);
            return 2;
        }
        else if (pos2 == bomb) {
            PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME);
            Sleep(3000);
            cout << "Игрок 2 взорвался на бомбе! Победил Игрок 1!" << endl;
            Sleep(3000);
            return 1;
        }

        if (pos1 == trap) {
            cout << "Игрок 1 попал в ловушку! Откат на 3 позиции!" << endl;
            pos1 = max(0, pos1 - 3);
            Sleep(2000);
        }
        if (pos2 == trap) {
            cout << "Игрок 2 попал в ловушку! Откат на 3 позиции!" << endl;
            pos2 = max(0, pos2 - 3);
            Sleep(2000);
        }

        if (pos1 >= track && pos2 >= track) {
            cout << "Оба игрока дошли до финиша! Ничья!" << endl;
            Sleep(3000);
            return 0;
        }
        else if (pos1 >= track) {
            cout << "Игрок 1 достиг финиша и победил!" << endl;
            Sleep(3000);
            return 1;
        }
        else if (pos2 >= track) {
            cout << "Игрок 2 достиг финиша и победил!" << endl;
            Sleep(3000);
            return 2;
        }

        Sleep(1500);
    }
}

// случайный выбор мини-игры
int randomgame() {
    
    int winner = 0;
    system("CLS");
    cout << "Случайная мини-игра...\n";
    Sleep(1000);
    ShowRandom();
    system("CLS");
    short GameChoose = 1 + rand() % 5;
    cout << GameChoose << " ";
    switch (GameChoose) {
    case 1: cout << "Кто ближе?\n"; Sleep(1500); winner = guess(); break;
    case 2: cout << "Реши пример\n"; Sleep(1500); winner = math(); break;
    case 3: cout << "Крестики-нолики\n"; Sleep(1500); winner = tictoe(); break;
    case 4: cout << "Гонка\n"; Sleep(1500); winner = formula1(); break;
    case 5: cout << "Камень-Ножницы-Бумага\n"; Sleep(1500); winner = rockpaper(); break;
    }
    Sleep(2000);
    system("CLS");
    return winner; // 1 / 2 / 0
}

// ========== Игра с бомбой ==========
void bombGame() {
    long numberMas, Cmin, Cmax, diopozon, x, exitFlag = 0;

    system("CLS");
    cout << "Введите минимальное значение: ";
    cin >> Cmin;
    cout << "Введите максимальное значение: ";
    cin >> Cmax;
    diopozon = Cmax - Cmin;
    system("CLS");

    cout << "Введите количество бомб, заминированных двумя игроками:\n";
    long bomb_count;
    bool bomb_ind = false;
    while (!bomb_ind) {
        cin >> bomb_count;
        if (bomb_count < 0) {
            cout << "Некорректно. Введите неотрицательное число.\n";
        }
        else if (bomb_count >= diopozon / 2) {
            cout << "Слишком много, вводи заново\n";
        }
        else bomb_ind = true;
    }

    long bomb_fullsize = bomb_count * 2;
    // массив доступных чисел
    long* mas = new long[diopozon + 1];
    x = Cmin;
    for (int i = 0; i <= diopozon; i++) mas[i] = x++;

    // установка бомб
    int* bomb = new int[bomb_fullsize];
    system("CLS");
    for (int j = 0; j < bomb_count; j++) {
        if (j == 0) {
            cout << "1-й Игрок, заминируйте бомбы на предложенных числах:\n";
            for (int i = 0; i <= diopozon; i++) cout << mas[i] << '|';
            cout << "\n";
        }
        cout << "Число " << j + 1 << ": ";
        int num1;
        while (true) {
            cin >> num1;
            if (num1 > Cmax || num1 < Cmin) {
                cout << "Его нет в диапазоне. Повторите: ";
            }
            else {
                PlaySound(TEXT("set.wav"), NULL, SND_FILENAME);
                cout << "Бомба успешно установлена\n";
                bomb[j] = num1;
                Sleep(1000);
                break;
            }
        }
    }

    system("CLS");
    for (int j = 0; j < bomb_count; j++) {
        if (j == 0) {
            cout << "2-й Игрок, заминируйте бомбы на предложенных числах:\n";
            for (int i = 0; i <= diopozon; i++) cout << mas[i] << '|';
            cout << "\n";
        }
        cout << "Число " << j + 1 << ": ";
        int num2;
        while (true) {
            cin >> num2;
            if (num2 > Cmax || num2 < Cmin) {
                cout << "Его нет в диапазоне. Повторите: ";
            }
            else {
                PlaySound(TEXT("set.wav"), NULL, SND_FILENAME);
                cout << "Бомба успешно установлена\n";
                bomb[j + bomb_count] = num2;
                Sleep(1000);
                break;
            }
        }
    }

    system("CLS");
    cout << "Бомбы установлены -> Игра началась\n";
    Sleep(2000);

    // выбрать безопасное число a (не бомба)
    int a;
    if (bomb_count != 0) {
        bool unique;
        do {
            unique = true;
            a = Cmin + rand() % (Cmax - Cmin + 1);
            for (int j = 0; j < bomb_fullsize; j++)
                if (a == bomb[j]) { unique = false; break; }
        } while (!unique);
    }
    else {
        a = Cmin + rand() % (Cmax - Cmin + 1);
    }

    cout << endl;
    int playerTurn = 1; // 1 -> Игрок 1, 2 -> Игрок 2 (по четности)
    while (exitFlag != 1) {
        system("CLS");
        cout << '|';
        for (int i = 0; i <= diopozon; i++) cout << mas[i] << '|';
        cout << endl;

        if (playerTurn % 2 != 0) cout << "Игрок 1, введите число: ";
        else cout << "Игрок 2, введите число: ";

        int number;  cin >> number;
        if (number > Cmax || number < Cmin) {
            cout << "Числа нет в диапазоне\n";
            Sleep(1500);
            continue;
        }
        numberMas = number - Cmin;
        mas[numberMas] = 0;

        // угадал безопасное число
        if (number == a) {
            system("CLS");
            if (playerTurn % 2 != 0) {
                cout << "Игрок 1 победил\n";
                applyRule(1, 1); // базовое правило: победитель бомбочки +1
            }
            else {
                cout << "Игрок 2 победил\n";
                applyRule(1, 2);
            }
            Sleep(2000);
            exitFlag = 1;
        }
        else {
            // подорвался на бомбе?
            for (int i = 0; i < bomb_fullsize; i++) {
                if (bomb[i] == number) {
                    system("CLS");
                    if (playerTurn % 2 != 0) {
                        PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME);
                        Sleep(3000);
                        cout << "Игрок 1 подорвался! Победил Игрок 2\n";
                        applyRule(1, 2);
                    }
                    else {
                        PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME);
                        Sleep(3000);
                        cout << "Игрок 2 подорвался! Победил Игрок 1\n";
                        applyRule(1, 1);
                    }
                    Sleep(2000);
                    exitFlag = 1;
                    break;
                }
            }
        }
        playerTurn++;
    }
    delete[] mas;
    delete[] bomb;
}

// ========== Основной цикл раундов ==========
void probnik() {
    system("CLS");
    setlocale(LC_ALL, "RU");
    srand(static_cast<unsigned>(time(0)));

    int roundCount = 0;
    cout << "Выберите количество раундов: \n 1: 1\n 2: 3\n 3: 5\n 4: 7\n 5: 9\n 6: 15\n 7: Свое\n";
    int chooseRound; cin >> chooseRound;
    switch (chooseRound) {
    case 1: roundCount = 1; break;
    case 2: roundCount = 3; break;
    case 3: roundCount = 5; break;
    case 4: roundCount = 7; break;
    case 5: roundCount = 9; break;
    case 6: roundCount = 15; break;
    case 7: cout << "Введите количество раундов: "; cin >> roundCount; break;
    default: cout << "Пасхалка\n"; Sleep(2000); return;
    }

    for (int z = 1; z <= roundCount; z++) {
        system("CLS");
        cout << "Раунд " << z << " начался\n";
        cout << "Счет:\n Игрок 1: " << scorePlayer1 << "\n Игрок 2: " << scorePlayer2 << "\n";
        Sleep(2000);

        // 1) Бомбочка (обновляет счёт сразу)
        bombGame();
        Sleep(2000);

        // 2) Случайная мини-игра
        int winnerMini = randomgame();
        Sleep(2000);

        // 3) Случайный ивент и применение правил
        int rule = randomevent();
        if (winnerMini == 1 || winnerMini == 2) applyRule(rule, winnerMini);

        cout << "Счет после раунда:\n Игрок 1: " << scorePlayer1 << "\n Игрок 2: " << scorePlayer2 << "\n";
        Sleep(3000);
    }

    system("CLS");
    if (scorePlayer1 > scorePlayer2) {
        PlaySound(TEXT("win.wav"), NULL, SND_FILENAME);
        Sleep(1000); 
        cout << "Итог: Игрок 1 победил\n";
    }
    else if (scorePlayer1 < scorePlayer2) {
        PlaySound(TEXT("win.wav"), NULL, SND_FILENAME);
        Sleep(1000);
        cout << "Итог: Игрок 2 победил\n";
    }
    else cout << "Итог: Ничья\n";

    cout << "\nНажмите Enter, чтобы выйти...";
    cin.ignore();
    cin.get();
}