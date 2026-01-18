#include "header.h"

void randomevent() {
	setlocale(LC_ALL, "RU");
	srand(unsigned(time(0)));
	ShowRandom();
	short EventChoose = 1 + rand() % 6;
	switch (EventChoose) {
    case 1:
        cout << " Победивший Игрок получает + 1 бал";
        Sleep(3000);
        //
        break;
    case 2:
        cout << " Победивший Игрок получает + 2 балла";
        Sleep(3000);
        //
        break;
    case 3:
        cout << " Проигравший Игрок теряеет все баллы";
        Sleep(3000);
        //
        break;
    case 4:
        cout << " Игра наоборот: Проигравший получает очко вместо победившего\n";
        Sleep(3000);
        //
        break;
    case 5:
        cout << " Победивший Игрок теряет 2 балла";
        Sleep(3000);
        //
        break;
    }
}