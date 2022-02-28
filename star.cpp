#include "star.h"
#include "tools.h"
#include "point.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "man.h"

//void Star::InitStar() {
//	SetCursorPosition(x, y);
//	std::cout << "бя";
//}

void Star::StarAppear() {
	srand(time(0));
	x = rand() % 13 + 1;
	y = rand() % 13 + 1;
	SetCursorPosition(x, y);
	std::cout << "бя";
}

bool Star::ManPass(Man& man) {
	if ((x == man.GetX() && y - 1 == man.GetY())
		|| (x == man.GetX() && y + 1 == man.GetY())
		|| (x - 1 == man.GetX() && y == man.GetY())
			|| (x + 1 == man.GetX() && y == man.GetY()))
			return true;
	return false;
}

void Star::ReStar() {
	SetCursorPosition(x, y);
	std::cout << "бя";
}