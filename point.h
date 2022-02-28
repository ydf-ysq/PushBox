#ifndef POINT_H
#define POINT_H

class Point {
public:
	Point(int x, int y):x(x),y(y){}
	void PrintBlock();
	//void PrintCircle();
	void PrintMan();
	void PrintStar();
	void Clear();
	int GetX() { return this -> x; }
	int GetY() { return this -> y; }
private:
	int x, y;
};

#endif // 
