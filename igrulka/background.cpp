#include <cctype>
#include "header.h"

void setBackgroundColor(int r, int g, int b) {
    cout << "\033[48;2;" << r << ";" << g << ";" << b << "m";
}


void background() {
    system("CLS");
    cout << "Выберите цвет текста:\n" << " 1: Черный\n 2: Синий\n 3: Зеленый\n 4: Голубой\n 5: Красный\n" << " 6: Пурпурный\n 7: Желтый\n 8: Белый\n 9: Серый\n" << " 10: Светло-синий\n 11: Светло-зеленый\n 12: Светло-голубой\n" << " 13: Светло-красный\n 14: Светло-пурпурный\n 15: Светло-желтый\n" << " 16: Ярко-белый\n 17: Свой цвет\n";
    int mark;
    cin >> mark;

    switch (mark) {
    case 1: {
        setBackgroundColor(0, 0, 0); break;
    }
    case 2: {
        setBackgroundColor(0, 0, 255); break;
    }
    case 3: {
        setBackgroundColor(0, 255, 0); break;
    }
    case 4: {
        setBackgroundColor(0, 255, 255); break;
    }
    case 5: {
        setBackgroundColor(255, 0, 0); break;
    }
    case 6: {
        setBackgroundColor(238, 130, 238); break;
    }
    case 7: {
        setBackgroundColor(255, 255, 0); break;
    }
    case 8: {
        setBackgroundColor(255, 255, 255); break;
    }
    case 9: {
        setBackgroundColor(128, 128, 128); break;
    }
    case 10: {
        setBackgroundColor(30, 144, 255); break;
    }
    case 11: {
        setBackgroundColor(144, 238, 144); break;
    }
    case 12: {
        setBackgroundColor(135, 206, 235); break;
    }
    case 13: {
        setBackgroundColor(205, 92, 92); break;
    }
    case 14: {
        setBackgroundColor(186, 85, 211); break;
    }
    case 15: {
        setBackgroundColor(255, 255, 224); break;
    }
    case 16: {
        setBackgroundColor(255, 250, 250); break;
    }
    case 17:{
        urllink();
        system("CLS");
        int a, b, c;
        cout << "Введите значение R: "; cin >> a;
        cout << "Введите значение G: "; cin >> b;
        cout << "Введите значение B: "; cin >> c;
        setBackgroundColor(a, b, c);
        break;
    }
    default:
        cout << "Нет такого варианта" << endl;
        break;
    }
}

        

