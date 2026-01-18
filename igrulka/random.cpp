#include <cctype>
#include "header.h"

using namespace std;
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

void ShowRandom() {
	Sleep(1000);
	PlaySound(TEXT("roll.wav"), NULL, SND_FILENAME);
	srand(unsigned(time(0)));
	short random4ik = 1 + rand() % 5;
		for (int i = 0; i < 32; i++) {
			cout << random4ik;
			system("CLS");
			random4ik = 1 + rand() % 5;
		}
}