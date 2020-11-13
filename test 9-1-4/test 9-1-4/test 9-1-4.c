#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//1.打印游戏开始界面菜单
void menu()
{
	printf("    开始游戏\n          ");
	printf("        1.简单模式\n         ");
	printf("        2.困难模式\n        ");
	printf("        3.退出游戏            ");
}

void game1()//三子棋游戏（简单模式）
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//创建一个棋盘
	InitBoard(board, ROW, COL);//初始化棋盘为空格
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)//玩游戏过程
	{
		Playermove(board, ROW, COL);//玩家走一步
		//分析游戏的结局：
		//1.玩家胜利，让判断输赢的函数返回‘X’
		//2.电脑胜利，让判断输赢的函数返回‘O’
		//3.平局，让判断输赢的函数返回‘Q’
		//4.游戏继续，让判断输赢的函数返回‘C’
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')//创建一个判断输赢的函数
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//走一步就打印一次棋盘
		Computermove1(board, ROW, COL);//电脑走一步
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//走一步就打印一次棋盘
	}
	if (ret == 'X')
	{
		printf("玩家胜\n");
	}
	else if (ret == 'O')
	{
		printf("电脑胜\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
void game2()//三子棋游戏（困难模式）
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//创建一个棋盘
	InitBoard(board, ROW, COL);//初始化棋盘为空格
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)//玩游戏过程
	{
		Playermove(board, ROW, COL);//玩家走一步
		//分析游戏的结局：
		//1.玩家胜利，让判断输赢的函数返回‘X’
		//2.电脑胜利，让判断输赢的函数返回‘O’
		//3.平局，让判断输赢的函数返回‘Q’
		//4.游戏继续，让判断输赢的函数返回‘C’
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')//创建一个判断输赢的函数
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//走一步就打印一次棋盘
		Computermove2(board, ROW, COL);//电脑走一步
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//走一步就打印一次棋盘
	}
	if (ret == 'X')
	{
		printf("玩家胜\n");
	}
	else if (ret == 'O')
	{
		printf("电脑胜\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1://简单模式的游戏
			game1();
			break;
		case 2://困难模式的游戏
			game2();
			break;
		case 3://退出游戏
			printf("退出游戏\n");
			break;
		default://其他情况
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}