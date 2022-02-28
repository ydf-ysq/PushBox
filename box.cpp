#include "box.h"
#include "tools.h"
#include <ctime>
#include <cstdlib>

Box::Box(int x, int y) {
	box.emplace_back(x, y);
}

void Box::InitBox() {
	box.front().PrintBlock();
}

bool Box::InPosition(Star& star) {
	if (GetX() == star.x && GetY() == star.y)
		return true;
	else return false;
}

void Box::BoxClear() {
		box.front().Clear();
}

void Box::BoxAppear() {
	srand(time(0));
	int x = rand() % 11 + 2;
	int y = rand() % 11 + 2;
	box.pop_front();
	box.emplace_back(x, y);
	box.front().PrintBlock();
}

bool Box::OnEdge(int man_dir) {
	switch (man_dir) {
	case UP:
		if (GetY() == 1)
			return true;
		break;
	case DOWN:
		if (GetY() == 13)
			return true;
		break;
	case LEFT:
		if (GetX() == 1)
			return true;
		break;
	case RIGHT:
		if (GetX() == 13)
			return true;
		break;
	}
	return false;
}

void Box::moved(int man_dir) {
	switch (man_dir) {
		//箱子没方向，只需要跟着人的方向移动即可
	case UP:
		box.front().Clear();
		box.emplace_back(GetX(), GetY() - 1);
		box.pop_front();
		box.front().PrintBlock();
		break;
	case DOWN:
		box.front().Clear();
		box.emplace_back(GetX(), GetY() + 1);
		box.pop_front();
		box.front().PrintBlock();
		break;
	case LEFT:
		box.front().Clear();
		box.emplace_back(GetX() - 1, GetY());
		box.pop_front();
		box.front().PrintBlock();
		break;
	case RIGHT:
		box.front().Clear();
		box.emplace_back(GetX() + 1, GetY());
		box.pop_front();
		box.front().PrintBlock();
		break;
	}
}