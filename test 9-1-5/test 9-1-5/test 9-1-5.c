#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
 
void menu()
{
	printf("*******************************\n");
	printf("*********1.开始游戏************\n");
	printf("*********2.退出游戏************\n");
	printf("*******************************\n");
}


void game()
{
	char mine[ROWS][COLS] = {0};//存放布置好的雷
	char show[ROWS][COLS] = {0};//存放排查出来雷的信息
	InitBoard(mine, ROWS, COLS, '0');//初始化布置雷的棋盘的函数
	InitBoard(show, ROWS, COLS, '*');//初始化排查出来雷的棋盘的函数
	DisplayBoard(show, ROW, COL);//打印排查出来雷的函数
	//DisplayBoard(mine, ROW, COL);////布置好的雷不能打印
	//1.布置雷
	SetMine(mine, ROW, COL);//布置雷的函数
	DisplayBoard(mine, ROW, COL);//
	//2.扫雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机生成雷的坐标
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}