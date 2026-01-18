#include "header.h"

void randomgame1() {
	setlocale(LC_ALL, "RU");
	srand(unsigned(time(0)));
	ShowRandom();
	short GameChoose =  1 + rand() % 6;
	switch (GameChoose) {
	case 1:
		system("CLS");
		cout << "Угадай число\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		multiplayer();
		break;
	case 2:
		system("CLS");
		cout << "Кто ближе?\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		guess1();
		break;
	case 3:
		system("CLS");
		cout << "Реши пример\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		math1();
		break;
	case 4:
		system("CLS");
		cout << "Крестики - нолики\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		tictoe1();
		break;
	case 5:
		system("CLS");
		cout << "Гонка\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		formula11();
		break;
	case 6:
		system("CLS");
		cout << "Камень Ножницы Бумага\nЗагрузка...";
		Sleep(2000);
		system("CLS");
		rockpaper1();
		break;
	}
	

	

}