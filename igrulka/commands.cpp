#include "header.h"


void printTextCentered(const string& text) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);

    int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int pad = max(0, (width - (int)text.length()) / 2);

    cout << setw(pad) << setfill(' ') << "" << text << endl;
}

void printBlockCenter(const vector<string>& lines) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);

    int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    for (auto& line : lines) {
        int pad = max(0, (width - (int)line.length()) / 2);
        cout << setw(pad) << setfill(' ') << "" << line << endl;
    }
}
void printBlockCentered(const vector<string>& lines) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);

    int width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    int blockHeight = (int)lines.size();
    int startY = max(0, (height - blockHeight) / 2);

    for (int i = 0; i < blockHeight; i++) {
        int lineLen = (int)lines[i].length();
        int pad = max(0, (width - lineLen) / 2);

        COORD pos = { (SHORT)pad, (SHORT)(startY + i) };
        SetConsoleCursorPosition(hOut, pos);
        cout << lines[i] << endl;
    }
}
void winPlusTwo(int winner) {
    if (winner == 1) scorePlayer1 += 2;
    else scorePlayer2 += 2;
}

// Победивший получает +1
void winPlusOne(int winner) {
    if (winner == 1) scorePlayer1 += 1;
    else scorePlayer2 += 1;
}

// Проигравший теряет все баллы
void loserLoseAll(int loser) {
    if (loser == 1) scorePlayer1 = 0;
    else scorePlayer2 = 0;
}

// Игра наоборот: проигравший получает очко
void reverseGame(int loser) {
    if (loser == 1) scorePlayer1 += 1;
    else scorePlayer2 += 1;
}

// Победивший теряет 2 балла
void winMinusTwo(int winner) {
    if (winner == 1) scorePlayer1 -= 2;
    else scorePlayer2 -= 2;
}

// вспомогательная функция для вывода
void showScores() {
    cout << "Игрок 1: " << scorePlayer1 << " | Игрок 2: " << scorePlayer2 << endl;
}