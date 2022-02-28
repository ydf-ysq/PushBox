#include "startgame.h"
#include "conio.h"
#include "man.h"
#include "box.h"
#include "star.h"
#include <iostream>


void PlayGame() {
	Star star;
	star.StarAppear();
	Box box;
	box.BoxAppear();
	Man man;
	man.InitMan();
	while (!QuitGame()) {
		man.move(box);
		if (star.ManPass(man)) star.ReStar();
		if (box.InPosition(star)) {
			box.BoxClear();
			box.BoxAppear();
			star.StarAppear();
		}
	}
}

bool QuitGame() {
	if (_getch() == 27)//°´esc¼üÍË³ö
			return true;
	return false;
}