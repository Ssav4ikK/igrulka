#include <cctype>
#include <iomanip>
#include <conio.h>
#include "header.h"

void menu() {
	setlocale(LC_ALL, "RU");
	system("CLS");
	char probel = ' ';
	char paint = '#';
	vector<string> menuArt;

	// строка 1
	{
		ostringstream oss;
		oss
			<< setw(2) << setfill(probel) << probel
			<< setw(5) << setfill(paint) << paint
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
		menuArt.push_back(oss.str());
	}

	// строка 2
	{
		ostringstream oss;
		oss
			<< setw(1) << setfill(probel) << probel
			<< setw(7) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(4) << setfill(probel) << probel
			<< setw(3) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(2) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint;
		menuArt.push_back(oss.str());
	}

	// строка 3
	{
		ostringstream oss;
		oss
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(1) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(5) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(6) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(2) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint;
		menuArt.push_back(oss.str());
	}

	// строка 4
	{
		ostringstream oss;
		oss
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(3) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(4) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(3) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(6) << setfill(paint) << paint;
		menuArt.push_back(oss.str());
	}

	// строка 5
	{
		ostringstream oss;
		oss
			<< setw(2) << setfill(paint) << paint
			<< setw(3) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(5) << setfill(paint) << paint
			<< setw(1) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(2) << setfill(probel) << probel
			<< setw(2) << setfill(paint) << paint
			<< setw(2) << setfill(probel) << probel
			<< setw(4) << setfill(paint) << paint;
		menuArt.push_back(oss.str());
	}
	printBlockCenter(menuArt);

	cout << endl << endl;
	printTextCentered("1: Угадай число: Одиночный режим");
	printTextCentered("2: Угадай число: Мультиплеер");
	printTextCentered("3: Угадай число: Бот edition");
	printTextCentered("4: Правила");
	printTextCentered("5: Косметика");
	printTextCentered("6: Мини-игры");
	printTextCentered("7: Сайт проекта");
	printTextCentered("8: Документация по проекту");
	char mode = _getch();
	switch (mode) {

	case '1':
		solo();
		break;
	case '2':
		probnik();
		break;
	case '3':
		with_bot();
		break;
	case '4':
		rules();
		break;
	case '5':
		cosmetics();
		break;
	case '6':
		randomgame1();
		break;
	case '7':
		system("start main.html");
		break;
	case '8':
		system("start \"\" \"проект опи.docx\"");
		break;
	case '9':
		system("CLS");
		cout << "Введите пароль: ";
		int password; cin >> password;
		if (password == 1312) {
			probnik();
			break;
		}
		else {
			cout << "Отказано в доступе.";
			Sleep(1500);
			break;
		}
	default:
		cout << "Пасхалка, нет такого режима";
		Sleep(3000);
		break;
	}

}