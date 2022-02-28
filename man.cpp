#include "man.h"
#include "point.h"
#include <conio.h>

#include <iostream>

void Man::InitMan() {
	man.front().PrintMan();
}
void Man::move(Box& box) {
	//��������ƶ��������ƶ������򲻶�
	//if (_kbhit()) {
		int ch = _getch();
		//ֻ�а����������Ҽ���ʱ�򣬲��ƶ�С��,�ҷ�����Ϊ�෴����
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

/*�ڱ�Ե�Ϻ�װ���Ӷ���Ӧ�������С�˽�Ҫ�ƶ��ķ������
*����ڱ�Ե�ϣ��ٲ���С��Ҳ���ᷴӦ
* ���Ҫ�ߵķ��������ӣ������ӣ�С��һ����
*/
void Man::NormalMove() {
	switch (dir) {
		//�ñ䷽�򣬲������÷����ƶ�
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
	//��������ڱ�Ե�ˣ����Ʋ���������������ֻ�����Ӳ��ڱ�Ե������
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