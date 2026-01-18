#include "Header.h"
void print(const wstring& msg) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD written;
    WriteConsoleW(hConsole, msg.c_str(), (DWORD)msg.size(), &written, NULL);
}
//✂ 🪨 📄
void rockpaper1() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    bool acess = false;
    short p1, p2;
    while (acess != true) {
        print(L"Игрок 1\n 1)🪨\n 2)✂\n 3)📄\n");
        cin >> p1;
        if (p1 > 3 || p1 < 1) {
            print(L"Выбери нормально");
            Sleep(1500);
            system("CLS");
        }
        else {
            system("CLS");
            print(L"Игрок 2\n 1)🪨\n 2)✂\n 3)📄\n");
            cin >> p2;
            if (p2 > 3 || p2 < 1) {
                print(L"Выбери нормально");
                Sleep(1500);
                system("CLS");
            }
            else acess = true;
            system("CLS");
        }
    }
    if (p1 == p2) print(L"👑 Ничья 👑");
    else if (p1 == 1 && p2 == 2) print(L"Игрок 1 побеждает👑 🪨 >> ✂");
    else if (p1 == 2 && p2 == 1) print(L"Игрок 2 побеждает👑 ✂ << 🪨");
    else if (p1 == 2 && p2 == 3) print(L"Игрок 1 побеждает👑 ✂ >> 📄");
    else if (p1 == 3 && p2 == 2) print(L"Игрок 2 побеждает👑 📄 << ✂");
    else if (p1 == 3 && p2 == 1) print(L"Игрок 1 побеждает👑 📄 >> 🪨");
    else if (p1 == 1 && p2 == 3) print(L"Игрок 2 побеждает👑 🪨 << 📄");
    cout << "\nНажмите enter, чтобы вернуться в меню.";
    cin.ignore();
    cin.get();
    cout << "Загрузка...";
    Sleep(3000);
    system("CLS");
}