#include <cctype>
#include <iomanip>
#include "header.h"

void rules() {
	system("CLS");
	char paint = '#';
	char probel = ' ';
    vector<string> rulesArt;

    // строка 1
    {
        ostringstream oss;
        oss << setw(4) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(5) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 2
    {
        ostringstream oss;
        oss << setw(4) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 3
    {
        ostringstream oss;
        oss << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 4
    {
        ostringstream oss;
        oss << setw(3) << setfill(probel) << probel 
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(5) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 5
    {
        ostringstream oss;
        oss << setw(4) << setfill(probel) << probel 
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(5) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 6
    {
        ostringstream oss;
        oss << setw(4) << setfill(probel) << probel  
            << setw(5) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(5) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(9) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 7
    {
        ostringstream oss;
        oss << setw(4) << setfill(probel) << probel 
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    // строка 8
    {
        ostringstream oss;
        oss << setw(3) << setfill(probel) << probel 
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(2) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(4) << setfill(paint) << paint
            << setw(2) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(6) << setfill(paint) << paint
            << setw(1) << setfill(probel) << probel
            << setw(5) << setfill(paint) << paint;
        rulesArt.push_back(oss.str());
    }

    printBlockCenter(rulesArt);
    cout << endl;
    printTextCentered("1. ѕервое правило игрульки, никогда не говорить о игрульке =_="); 
    printTextCentered("2. ¬торое правило, всегда выполн€йте то, что от вас прос€т, иначе будет плохо x.x");
    printTextCentered("3.“ретье правило - веселье n_n");
    printTextCentered("Ќажмите enter, чтобы вернутьс€ в меню");
	cin.ignore();
	cin.get();
    printTextCentered("«агрузка...");
	Sleep(1500);
	}
    