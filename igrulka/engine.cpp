#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include "header.h"
using namespace std;

void engine() {
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    PlaySound(TEXT("start.wav"), NULL, SND_FILENAME);
    char paint = '#';
    char probel = ' ';
    vector<string> igrulka;

    // Строка 1 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(4) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(4) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(4) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(4) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 2 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(1) << setfill(probel) << "" << setw(4) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(4) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(3) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 3 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(2) << setfill(probel) << "" << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(5) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(4) << setfill(probel) << ""
            << setw(5) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 4 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(2) << setfill(probel) << "" << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(3) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(4) << setfill(probel) << ""
            << setw(4) << setfill(paint) << "" << setw(3) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 5 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(2) << setfill(probel) << "" << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(4) << setfill(paint) << "" << setw(3) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(4) << setfill(probel) << ""
            << setw(5) << setfill(paint) << "" << setw(2) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 6 (ИСПРАВЛЕНО)
    {
        ostringstream oss;
        oss << setw(1) << setfill(probel) << "" << setw(4) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(5) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(3) << setfill(paint) << "" << setw(1) << setfill(probel) << ""
            << setw(6) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    // Строка 7 (ИСПРАВЛЕНО - добавил номер строки)
    {
        ostringstream oss;
        oss << setw(1) << setfill(probel) << ""
            << setw(4) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(4) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(4) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(5) << setfill(paint) << ""
            << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << ""
            << setw(1) << setfill(probel) << ""
            << setw(2) << setfill(paint) << ""
            << setw(2) << setfill(probel) << ""
            << setw(2) << setfill(paint) << "";
        igrulka.push_back(oss.str());
    }

    printBlockCentered(igrulka);

    Sleep(3000);
    system("CLS");

    // ТЕКСТ СОГЛАШЕНИЯ - убедитесь, что файл сохранен в кодировке Windows-1251
    cout << "===========================================================\n";
    cout << "         ПОЛЬЗОВАТЕЛЬСКОЕ СОГЛАШЕНИЕ IGrulka v1.0\n";
    cout << "===========================================================\n\n";

    cout << "1. ПРИНЦИПЫ ИГРУЛЬКИ\n";
    cout << "===========================================================\n";
    cout << "- Здесь могут быть баги, но мы их называем 'сюрпризы',\n";
    cout << "- Бомбки могут быть громкими, но не настоящими,\n";
    cout << "- Мини-игры могут работать по своим законам физики.\n\n";

    cout << "2. ПРАВИЛА ВИРТУАЛЬНОГО ВЫЖИВАНИЯ\n";
    cout << "===========================================================\n";
    cout << "- Ваш персонаж может потерять виртуальные носки,\n";
    cout << "- Инвентарь может внезапно заполниться тыквами,\n";
    cout << "- Квестовые предметы могут оказаться съедобными.\n\n";

    cout << "3. СЛУЧАЙНЫЕ СОБЫТИЯ\n";
    cout << "===========================================================\n";
    cout << "- Экран может мигать, персонаж - летать,\n";
    cout << "- Предметы - исчезать, музыка - играть наоборот,\n";
    cout << "- А ваш игровой автограф может стать летающим.\n\n";

    cout << "4. ГАРАНТИИ РАЗРАБОТЧИКА\n";
    cout << "===========================================================\n";
    cout << "- Игра запустится (иногда со второго раза),\n";
    cout << "- Сохранения могут работать (или нет),\n";
    cout << "- Чувство юмора обязательно пригодится.\n\n";

    cout << "5. ВАШИ ОБЯЗАННОСТИ\n";
    cout << "===========================================================\n";
    cout << "- Не бить монитор при встрече с багом,\n";
    cout << "- Не пугать кота громкими бомбками,\n";
    cout << "- Помнить, что все это - просто шутка.\n\n";


    cout << "===========================================================\n";
    cout << "Нажимая [ПРИНЯТЬ], вы соглашаетесь:\n";
    cout << "1. Что в игре может случиться всякое\n";
    cout << "2. Что ваш персонаж не застрахован от абсурда\n";
    cout << "3. Что вы не будете плакать (сильно)\n";
    cout << "===========================================================\n\n";

    cout << "Введите 'принять' или 'точно принять': ";
    string acess;
    getline(cin, acess);

    // Приводим введенный текст к нижнему регистру для проверки
    string acess_lower = acess;
    for (char& c : acess_lower) {
        c = tolower(c);
    }

    if (acess_lower.find("принять") != string::npos) {
        cout << "Одобрено :)))\n";
    }
    else {
        cout << "Я сам решу что делать.\n";
    }

    cout << "Загрузка...";
    Sleep(2000);
    system("CLS");
}