#include "point.h"
#include "tools.h"
#include <iostream>

void Point::PrintBlock() {//�ȵ�ǽ���ֵ�����
	SetCursorPosition(x, y);
	std::cout << "��";

}
//void Point::PrintCircle() {
//	SetCursorPosition(x, y);
//	std::cout << "��";
//}
void Point::PrintMan() {
	SetCursorPosition(x, y);
	std::cout << "��";
}
void Point::PrintStar() {
	SetCursorPosition(x, y);
	std::cout << "��";
}

void Point::Clear() {
	SetCursorPosition(x, y);
	std::cout << "  ";
}