#include "man.h"
#include "point.h"
#include <conio.h>

#include <iostream>

void Man::InitMan() {
	man.front().PrintMan();
}
void Man::move(Box& box) {
	//如果按了移动键，就移动，否则不动
	//if (_kbhit()) {
		int ch = _getch();
		//只有按了上下左右键的时候，才移动小人,且方向不能为相反方向
		//if (ch == 224) {
			//ch = _getch();
			switch (ch) {
			case 72://UP
				dir = UP;
				if (!OnEdge() && !HitBox(box)) {
					NormalMove();
				}
				else if (HitBox(box)) {
					PushBox(box);
				}
				break;
			case 80://DOWN
				dir = DOWN;
				if (!OnEdge() && !HitBox(box)) {
					NormalMove();
				}
				else if (HitBox(box)) {
					PushBox(box);
				}
				break;
			case 75://LEFT
				dir = LEFT;
				if (!OnEdge() && !HitBox(box)) {
					NormalMove();
				}
				else if (HitBox(box)) {
					PushBox(box);
				}
				break;
			case 77://RIGTHT
				dir = RIGHT;
				if (!OnEdge() && !HitBox(box)) {
					NormalMove();
				}
				else if (HitBox(box)) {
					PushBox(box);
				}
				break;
			}
		//}
	//}
}

/*在边缘上和装箱子都是应该是针对小人将要移动的方向而言
*如果在边缘上，再操作小人也不会反应
* 如果要走的方向有箱子，则箱子，小人一起走
*/
void Man::NormalMove() {
	switch (dir) {
		//该变方向，并且往该方向移动
	case UP:
		man.front().Clear();
		man.emplace_back(GetX(), GetY() - 1);
		man.pop_front();
		man.front().PrintMan();
		break;
	case DOWN:
		man.front().Clear();
		man.emplace_back(GetX(), GetY() + 1);
		man.pop_front();
		man.front().PrintMan();
		break;
	case LEFT:
		man.front().Clear();
		man.emplace_back(GetX() - 1, GetY());
		man.pop_front();
		man.front().PrintMan();
		break;
	case RIGHT:
		man.front().Clear();
		man.emplace_back(GetX() + 1, GetY());
		man.pop_front();
		man.front().PrintMan();
		break;
	}
}

bool Man::HitBox(Box& box) {
	switch (dir) {
	case UP:
		if (GetY() - 1 == box.GetY() && GetX() == box.GetX())
			return true;
		break;
	case DOWN:
		if (GetY() + 1 == box.GetY() && GetX() == box.GetX())
			return true;
		break;
	case LEFT:
		if (GetX() - 1 == box.GetX() && GetY() == box.GetY())
			return true;
		break;
	case RIGHT:
		if (GetX() + 1 == box.GetX() && GetY() == box.GetY())
			return true;
		break;
	}
	return false;
}

void Man::PushBox(Box& box) {
	//如果箱子在边缘了，则推不动，即不做处理，只有箱子不在边缘才能推
	if (!box.OnEdge(dir)) {
		box.moved(dir);
		NormalMove();
	}
}

bool Man::OnEdge() {
	switch (dir) {
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