#ifndef BOX_H
#define BOX_H

#include <deque>
#include "point.h"
#include "star.h"

class Box {
public:
	enum Direction{UP,DOWN,LEFT,RIGHT};
	Box() { box.emplace_back(6, 7); }
	Box(int, int);
	void InitBox();
	bool InPosition(Star&);
	void BoxClear();
	void BoxAppear();
	bool OnEdge(int);
	void moved(int);
	int GetX() { return box.front().GetX(); }
	int GetY() { return box.front().GetY(); }
private:
	std::deque<Point> box;
};

#endif // !BOX_H



