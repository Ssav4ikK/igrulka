#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
extern int scorePlayer1;
extern int scorePlayer2;
void urllink();
void engine();
void solo();
void saper();
void multiplayer();
void menu();
void rules();
void with_bot();
void cosmetics();
void background();
void color();
void probnik();
void ShowRandom();
void rockpaper1();
void formula11();
void tictoe1();
void guess1();
void math1();
void randomgame1();
void printBlockCentered(const vector<string>& lines);
void printBlockCenter(const vector<string>& lines);
void printTextCentered(const string& text);
void winPlusTwo(int winner);
void winPlusOne(int winner);
void loserLoseAll(int loser);
void reverseGame(int loser);
void winMinusTwo(int winner);
void showScores();
