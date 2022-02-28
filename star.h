#ifndef STAR_H
#define STAR_H

#include <deque>
#include "point.h"
//#include "man.h"
class Man;

class Star{
public:
	Star() { x = 5; y = 7; }
	Star(const int x, const int y):x(x),y(y){}
	//void InitStar();
	void StarAppear();
	bool ManPass(Man&);
	void ReStar();

private:
	int x, y;
	friend class Box;

};

#endif

