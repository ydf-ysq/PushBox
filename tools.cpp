#include "tools.h"
#include <Windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines) {
	system("title ̰����");//���ô��ڱ���
	char cmd[30];
	sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ��ռ�����ַ����ʿ��*2
	system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�
}
void SetCursorPosition(int x, int y) {
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
}
void SetColor(int colorID) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}