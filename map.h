#ifndef MAP_H
#define MAP_H
#define MAP_H

#include <deque>
#include "point.h"

class Map{
public:
	Map() {
		map.emplace_back(0, 0);

		map.emplace_back(0, 1);
		map.emplace_back(1, 0);
		map.emplace_back(0, 2);
		map.emplace_back(2, 0);
		map.emplace_back(0, 3);
		map.emplace_back(3, 0);
		map.emplace_back(0, 4);
		map.emplace_back(4, 0);
		map.emplace_back(0, 5);
		map.emplace_back(5, 0);
		map.emplace_back(0, 6);
		map.emplace_back(6, 0);
		map.emplace_back(0, 7);
		map.emplace_back(7, 0);
		map.emplace_back(0, 8);
		map.emplace_back(8, 0);
		map.emplace_back(0, 9);
		map.emplace_back(9, 0);
		map.emplace_back(0, 10);
		map.emplace_back(10, 0);
		map.emplace_back(0, 11);
		map.emplace_back(11, 0);
		map.emplace_back(0, 12);
		map.emplace_back(12, 0);
		map.emplace_back(0, 13);
		map.emplace_back(13, 0);
		map.emplace_back(0, 14);
		map.emplace_back(14, 0);


		map.emplace_back(1, 14);
		map.emplace_back(14, 1);
		map.emplace_back(2, 14);
		map.emplace_back(14, 2);
		map.emplace_back(3, 14);
		map.emplace_back(14, 3);
		map.emplace_back(4, 14);
		map.emplace_back(14, 4);
		map.emplace_back(5, 14);
		map.emplace_back(14, 5);
		map.emplace_back(6, 14);
		map.emplace_back(14, 6);
		map.emplace_back(7, 14);
		map.emplace_back(14, 7);
		map.emplace_back(8, 14);
		map.emplace_back(14, 8);
		map.emplace_back(9, 14);
		map.emplace_back(14, 9);
		map.emplace_back(10, 14);
		map.emplace_back(14, 10);
		map.emplace_back(11, 14);
		map.emplace_back(14, 11);
		map.emplace_back(12, 14);
		map.emplace_back(14, 12);
		map.emplace_back(13, 14);
		map.emplace_back(14, 13);

		map.emplace_back(14, 14);
	}
	void PrintMap();
private:
	std::deque<Point> map;//µÿÕº¥Û–°£∫15*15
};

#endif // !MAP_H


