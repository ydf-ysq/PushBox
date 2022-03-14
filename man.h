#ifndef MAN_H
#define MAN_H

#include <deque>
#include "point.h"
#include "box.h"
#include "map.h"
//class Box;和include二选一
class Man {
public:
	enum Direction {UP,DOWN,LEFT,RIGHT};
	Man() {
		man.emplace_back(7, 7);
		dir = UP;
	}
	void InitMan();
	void move(Box&, Map&);
	void NormalMove();
	bool HitBox(Box&);
	void PushBox(Box&);
	bool OnEdge(Map&);

	int GetX() { return man.front().GetX(); }
	int GetY() { return man.front().GetY(); }

private:
	std::deque<Point> man;
	Direction dir;
};


#endif

