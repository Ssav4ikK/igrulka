
#include <cctype>
#include "header.h"

using namespace std;

void solo() {
    system("CLS");
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));
    int number_bomb, bombN, numberMas, Cmin, Cmax, diopozon, x, f = 0;
    cout << "Введите минимальное значение диапозона: ";
    cin >> Cmin; 
    cout << "Введите максимальное значение диапозона: ";
    cin >> Cmax;
    diopozon = Cmax - Cmin;
    system("CLS");
    cout << "Введите кол-во бомб \n";
    do {
        cin >> number_bomb;
        system("CLS");
        if (number_bomb > diopozon) {
            cout << "Пасхалка, но давай по новой" << endl;
        }
        else {
            cout << "Бомбы установлены->Игра началась";
        }
    } while (number_bomb > diopozon);


    int* bomb = new int[number_bomb];
    int* mas = new int[diopozon];
    x = Cmin;
    for (int i = 0; i <= diopozon; i++) {

        mas[i] = x;
        x++;
    }
    int a = Cmin + rand() % (Cmax - Cmin + 1);


    for (int i = 0; i < number_bomb; i++) {
        bool unique;
        do {
            unique = true;
            bomb[i] = Cmin + rand() % (Cmax - Cmin + 1);
            for (int j = 0; j < i; j++) {
                if (bomb[j] == bomb[i]) {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
    }

    for (int i = 0; i < number_bomb; i++) {
        bool unique;
        do {
            unique = true;
            a = Cmin + rand() % (Cmax - Cmin + 1);
            for (int j = 0; j < number_bomb; j++) {
                if (a == bomb[j]) {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
    }
   
    cout << endl;
    while (f != 1) {
        cout << '|';
        for (int i = 0; i <= diopozon; i++) {

            cout << mas[i] << '|';
        }
        cout << endl;
        cout << "\nВедите число: \n";
        int number;  cin >> number;
        if (number > Cmax || number < Cmin) {
            cout << "Пасхалка, но его нет в диапозоне\n";
        }
        numberMas = number - Cmin;
        mas[numberMas] = 0;
        if (number == a) {
            cout << "ПОБЕДА!!!";
            f = 1;
        }
        for (int i = 0; i < number_bomb; i++) {
            if (bomb[i] == number) {
                cout << "Из тебя вышел ужасный сапёр!!!";
                f = 1;
            }
        }

    }
    Sleep(3000);
}