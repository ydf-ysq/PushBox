#include "map.h"
#include <Windows.h>

void Map::PrintMap() {
	for (auto& point : map) {
		point.PrintBlock();
		Sleep(25);
	}
}