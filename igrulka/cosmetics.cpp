#include <cctype>
#include <conio.h>
#include "header.h"
int cosmeticChoose;
void cosmetics() {
	system("CLS");
	cout << "Выберете что хотите оформить:\n 1: Цвет \n 2: Задний фон \n 3: Вернуть к стандартным настройкам \n";
	char cosmeticChoose = _getch();
	switch (cosmeticChoose) {
	case '1':
		color();
		break;
	case '2':
		background();
		break;
	case '3':
		cout << "\033[0m";
		break;
	default:
		break;












	}
}