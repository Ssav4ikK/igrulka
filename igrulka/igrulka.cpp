#include <windows.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <string>
#include "header.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int exit = 0, logo = 0;
    while (exit != 1) {
        if (logo != 1) {
            engine();
            logo++;
        }

        char probel = ' ';
        char paint = '#';
        vector<string> igrulka;

        // строка 1
        {
            ostringstream oss;
            oss << setw(4) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(4) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }

        // строка 2
        {
            ostringstream oss;
            oss << setw(1) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(4) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(3) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }

        // строка 3
        {
            ostringstream oss;
            oss << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(5) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(4) << setfill(probel) << probel
                << setw(5) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }

        // строка 4
        {
            ostringstream oss;
            oss << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(3) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(4) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(3) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }

        // строка 5
        {
            ostringstream oss;
            oss << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(3) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(4) << setfill(probel) << probel
                << setw(5) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }
        

        // строка 6
        {
            ostringstream oss;
            oss << setw(1) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(5) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(3) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(6) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }

        // строка 7
        {
            ostringstream oss;
            oss << setw(1) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(4) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(5) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(1) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint
                << setw(2) << setfill(probel) << probel
                << setw(2) << setfill(paint) << paint;
            igrulka.push_back(oss.str());
        }


        // выводим весь блок по центру
        printBlockCenter(igrulka);

        cout << endl;
        printTextCentered("Вы хотите играть?");
        printTextCentered("1: Да");
        printTextCentered("2: Нет");

        char game = _getch();
        switch (game) {
        case '1': menu(); break;
        case '2': exit++; break;
        default: cout << "PS Пасхалка"; break;
        }
        system("CLS");
    }
}
