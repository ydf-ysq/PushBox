#ifndef MAP_H
#define MAP_H
#define MAP_H

#include <deque>
#include "point.h"

class Map {
public:
	Map() {
		map.emplace_back(0, 0);

		for (int i = 1; i < mapSize; ++i){
			map.emplace_back(0, i);
			map.emplace_back(i, 0);
		}

		for (int i = 1; i < mapSize - 1; ++i) {
			map.emplace_back(i, mapSize - 1);
			map.emplace_back(mapSize - 1, i);
		}

		map.emplace_back(mapSize - 1, mapSize - 1);
	}
	int getSize() {
		return mapSize;
	}
	void PrintMap();
private:
	std::deque<Point> map;
	int mapSize = 30;//µÿÕº¥Û–°
};

#endif // !MAP_H


