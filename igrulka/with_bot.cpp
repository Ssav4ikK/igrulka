#include <cctype>
#include "header.h"

void with_bot() {
    system("CLS");
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));
    int Cmin, Cmax;
    cout << "Введите минимальное значение диапазона: ";
    cin >> Cmin;
    cout << "Введите максимальное значение диапазона: ";
    cin >> Cmax;
    system("CLS");
    cout << "Введите число, которое будет угадывать бот: ";
    int win;
    cin >> win;
    int continue_ = 0;
    while (continue_ != 1) {
        if (win > Cmax || win < Cmin) {
            cout << "Число должно быть в диапазоне от " << Cmin << " до " << Cmax << ". Попробуйте еще раз: ";
            cin >> win;
        }
        else {
            continue_ = 1;
        }
    }
    system("CLS");
    int Min = Cmin;
    int Max = Cmax;
    int guess, attempts = 0;
    int max_attempts = 10 + rand() % (Max - Min + 1);
    bool cheated = false;
    while (attempts < max_attempts && !cheated) {
        attempts++;
        if (Min > Max) {
            cout << "Ты меня обманул X_X! Диапазон стал невозможным (" << Min << " > " << Max << ").\n";
            cout << "Игра остановлена. Нажмите Enter, чтобы продолжить.";
            cheated = true;
            break;
        }
        if (Min == Max) {
            if (Min == win) {
                cout << "Я думаю ваше число: " << Min << endl;
                cout << "Ураа, я победил!\n\nНажмите Enter, чтобы выйти в меню.";
                break;
            }
            else {
                cout << "Ты меня обманул X_X! По твоим ответам число должно быть " << Min;
                cout << ", но вы загадали " << win << ".\nИгра остановлена. Нажмите Enter, чтобы продолжить.";
                cheated = true;
                break;
            }
        }
        guess = Min + rand() % (Max - Min + 1);
        cout << "Дайте подумать... " << endl;
        Sleep(1500);
        if (guess == win) {
            system("CLS");
            cout << "Я думаю ваше число: " << guess << endl;
            cout << "Ураа, я победил! Угадал за " << attempts << " попыток.\n\nНажмите Enter, чтобы выйти в меню.";
            break;
        }
        else {
            cout << "Я думаю ваше число: " << guess << endl;
            cout << "Введите 1, если ваше число меньше.\nВведите 2, если ваше число больше.\n";
            int choose;
            cin >> choose;
            if (choose == 1) {
                if (win >= guess) {
                    cout << "Ты меня обманул X_X! Ты загадал " << win << ", но говоришь что число меньше " << guess << "!\n";
                    cout << "Игра остановлена. Нажмите Enter, чтобы продолжить.";
                    cheated = true;
                    break;
                }
                Max = guess - 1;
            }
            else if (choose == 2) {
                if (win <= guess) {
                    cout << "Ты меня обманул X_X! Ты загадал " << win << ", но говоришь что число больше " << guess << "!\n";
                    cout << "Игра остановлена. Нажмите Enter, чтобы продолжить.";
                    cheated = true;
                    break;
                }
                Min = guess + 1;
            }
            else {
                cout << "Неверный ввод! Введите 1 или 2.\n";
                attempts--;
            }
            if (win < Min || win > Max) {
                cout << "Ты меня обманул X_X! По твоим ответам число должно быть между " << Min << " и " << Max;
                cout << ", но ты загадал " << win << "!\nИгра остановлена. Нажмите Enter, чтобы продолжить.";
                cheated = true;
                break;
            }
        }
    }
    if (attempts >= max_attempts && !cheated) {
        cout << "Я сдаюсь! Не смог угадать за " << max_attempts << " попыток.\n";
        cout << "Возможно, ты ошибся с ответами. Нажмите Enter, чтобы продолжить.";
    }
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(1500);
}