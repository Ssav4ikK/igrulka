#include <cctype>
#include "header.h"

using namespace std;

void multiplayer() {
    system("CLS");
    setlocale(LC_ALL, "RU");
    srand(unsigned(time(0)));
    long number_bomb, bombN, numberMas, Cmin, Cmax, diopozon, x, exit = 0;
    int pointsP1=0, pointsP2=0, round;
    cout << "Выберите количество раундов: \n 1: 1 раунд\n 2: 3 раунда\n 3: 5 раундов\n 4: 7 раундов\n 5: 9 раундов\n 6: 15 раундов\n 7: Свое количество\n";
    int chooseRound; cin >> chooseRound;
    switch (chooseRound) {
    case 1:
        round = 1;
        break;
    case 2:
        round = 3;
        break;
    case 3:
        round = 5;
        break;
    case 4:
        round = 7;
        break;
    case 5:
        round = 9;
        break;
    case 6:
        round = 15;
        break;
    case 7:
        cout << "Выберете количество раундов";
        cin >> round;
        break;
    default:
        cout << "Пасхалка";
        Sleep(1500);
        break;
    }
    
    for (int z = 1; z <= round; z++) {
        exit = 0;
        system("CLS");
        cout << "Раунд " << z << " начался\n";
        Sleep(1000);
        system("CLS");
        cout << "Введите минимальное значение: ";
        cin >> Cmin;
        cout << "Введите максимальное значение: ";
        cin >> Cmax;
        diopozon = Cmax - Cmin;
        system("CLS");
        cout << "Введите количество бомб, которые будут заминированны двумя игроками: \n";
        
        long bomb_count; 
        bool bomb_ind=false;
        while (bomb_ind != true) {
            cin >> bomb_count;
            if (bomb_count < 0) {
                cout << "иди нахуй\n";
            }
            else if (bomb_count >= diopozon / 2) {
                cout << "Пасхалка, слишком много, вводи заново\n";
                cin >> bomb_count;
            }else bomb_ind = true;

        } 
        long bomb_fullsize = bomb_count * 2;
        system("CLS");
        long* mas = new long[diopozon];

        x = Cmin;
        for (int i = 0; i <= diopozon; i++) {

            mas[i] = x;
            x++;

        }

        int* bomb = new int [bomb_fullsize];
        for (int j = 0; j < bomb_count; j++) {
            if (j == 0) {
                cout << "1-й Игрок, заминируйте бомбы на предложенных числах : \n";
                for (int i = 0; i <= diopozon; i++) {

                    cout << mas[i] << '|';

                }
            }
            cout << "\nЧисло " << j + 1 << ": ";

            int pro = 0;
            while (pro == 0) {
                int num1; cin >> num1;
                
                if (num1 > Cmax || num1 < Cmin) {
                    cout << "Его нет в диапозоне";
                }
                else {
                    cout << "Бомба успешно установлена";
                    bomb[j] = num1;
                    pro = 1;
                }
            }
        }

        system("CLS");
        for (int j = 0; j < bomb_count; j++) {
            if (j == 0) {
                cout << "2-й Игрок, заминируйте бомбы на предложенных числах : \n";
                for (int i = 0; i <= diopozon; i++) {

                    cout << mas[i] << '|';

                }
            }
            cout << "\nЧисло " << j + 1 << ": ";

            int pro = 0;
            while (pro == 0) {
                int num2; cin >> num2;
               
                if (num2 > Cmax || num2 < Cmin) {
                    cout << "Его нет в диапозоне";
                }
                else {
                    cout << "Бомба успешно установлена";
                    bomb[j+bomb_count] = num2;
                    pro = 1;
                }
            }
        }
        system("CLS");
        cout << "Бомбы установлены->Игра началась";
        int a;
        if (bomb_count != 0) {
            for (int i = 0; i < bomb_fullsize; i++) {
                bool unique;
                do {
                    unique = true;
                    a = Cmin + rand() % (Cmax - Cmin + 1);
                    for (int j = 0; j < bomb_fullsize; j++) {
                        if (a == bomb[j]) {
                            unique = false;
                            break;
                        }
                    }
                } while (!unique);
            }
        }
        else {
            a = Cmin + rand() % (Cmax - Cmin + 1);
        }
        cout << endl;
        int player = 1;
        while (exit != 1) {
           
            cout << '|';
            for (int i = 0; i <= diopozon; i++) {

                cout << mas[i] << '|';
            }
            cout << endl;
            if (player % 2 != 0) {
                cout << "Игрок 1 введите число: \n";
            }
            else {
                cout << "Игрок 2 введите число: \n";
            }
            int number;  cin >> number;

            if (number > Cmax || number < Cmin) {
                cout << "Пасхалка, но его нет в диапозоне\n";
            }
            numberMas = number - Cmin;
            mas[numberMas] = 0;
            system("CLS");


            if (number == a) {
                if (player % 2 != 0) {

                    cout << "Игрок 1 победил\n ";
                    pointsP1++;
                }
                else {
                    cout << "Игрок 2 победил\n ";
                    pointsP2++;
                }
                exit = 1;
            }
            else for (int i = 0; i < bomb_fullsize; i++) {
                if (bomb[i] == number) {
                    if (player % 2 != 0) {

                        cout << "Игрок 1, из тебя вышел ужасный сапёр!!!\nИгрок 2 победил\n ";
                        pointsP2++;
                    }
                    else {
                        cout << "Игрок 2, из тебя вышел ужасный сапёр!!!\nИгрок 1 победил\n";
                        pointsP1++;
                    }
                    exit = 1;
                }
            }



            player++;
        }


        Sleep(2000);
       
    }
    system("CLS");
    if (pointsP1 > pointsP2) {
        cout << "Игрок 1 победил";
    }
    else  if (pointsP1 < pointsP2) {
        cout << "Игрок 2 победил";
    }
    else {
        cout << "Ничья";
    }
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");
}