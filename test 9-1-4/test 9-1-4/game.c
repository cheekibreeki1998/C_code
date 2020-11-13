#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//函数的实现部分：
//1.初始化棋盘全都为空格函数的实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//2.打印棋盘函数的实现（1.棋盘数据行 2.棋盘的分割行）
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印棋盘内的数据行
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//打印一个数据打印一个|最后的|不需要打印
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印棋盘里的分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
			//打印一个分割行打印一个|最后的|不需要打印
				printf("---");
			if (j < col-1)
				{
				printf("|");
				}
			}
		}
	printf("\n");
	}
}

//3.玩家落子函数的实现
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("该你走了，请输入要落子的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//确保用户落子的坐标是合乎棋盘布置的
		{
			if (board[x - 1][y - 1] == ' ')//在坐标合法的前提下判断该坐标是否被占用
			{
				board[x - 1][y - 1] = 'X';//坐标合法且没有被占用的时候显示一个“X”，代表用户落的子
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入!\n");//棋子坐标合法，但是已经被占用
			}
		}
		else
		{
			printf("您输入的坐标非法，请重新输入!\n");//棋子坐标不合法，提示用户重新输入
		}
	}
}

//4.电脑落子的函数的实现(简单模式)
void Computermove1(char board[ROW][COL], int row, int col)
{
	printf("该电脑走，电脑的落子是:\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}

//5.电脑落子的函数的实现(困难模式)
void Computermove2(char board[ROW][COL], int row, int col)
{
	printf("该电脑走，电脑的落子是:\n");
	int x = 1;
	int y = 1;
	while (1)
	{
		for (x = 1; x <= 3; x++)//当玩家有两个子连成一条线时，堵住
		{
			for (y = 1; y <= 3; y++)
			{
				if (board[x][y] == ' ')
				{
					board[x][y] = 'X';
					if (CheckWin(board, ROW, COL) == 'X')
					{
						board[x][y] = 'O';//一旦落子，就直接跳出while循环，后面都一样
						break;
					}
					else
						board[x][y] = ' ';//条件不成立电脑就不落子
				}

			}
		}
		if (board[2][2] == ' ')//如果中间可以落子，在中间落子
		{
			board[2][2] = 'O';
			return 0;
			break;
		}
		else //如果四个角可以落子，在四个角上落子。
		{
			for (x = 1; x <= 3; x += 2)
			{
				for (y = 1; y <= 3; y += 2)
				{
					if (board[x][y] == ' ')
					{
						board[x][y] = 'O';
						return 0;
						break;
					}
				}
			}
			x = rand() % ROW;//四个边的中间随机落子，0—2
			y = rand() % COL;
			if (board[x][y] == ' ')
			{
				board[x][y] = 'O';
				break;
			}
		}
	}
}






//6.判断游戏输赢函数的实现
//判断是否平局需要设计一个函数判断棋盘满没有满来实现
 static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘里有空格说明没满
			}
		}
	}
	return 1;//棋盘没空格满了
}
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//行是否有3个数据相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//列是否有3个数据相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线是否有3个数据相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	//判断是否为平局
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//以上三种情况都不发生游戏就继续
	return 'C';
}
