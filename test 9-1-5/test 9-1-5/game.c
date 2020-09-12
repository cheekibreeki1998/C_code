#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘函数的实现
void InitBoard(char board[ROWS][COLS] , int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘函数的实现
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------------------------------\n");
	for (i = 0; i <= col; i++)//列号的打印
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//行号的打印
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
}

//布置雷的函数的实现
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;//布置10个雷，并且随机生成
	while (count)//每生成1个雷count就--
	{
		//1.生成随机雷的坐标
		int x = rand()%row+1;//1-9的横坐标
		int y = rand()%col+1;//1-9的纵坐标
		//2.布置雷
		if (board[x][y] == '0')//'0'代表不是雷
		{
			board[x][y] = '1';//‘1’代表是
			count--;
		}
	}
}

//扫雷的函数的实现：
//统计无雷的坐标附近雷的个数的函数
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]-7*'0';
}

//目标坐标无雷就扩展的函数
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (mine[x - 1][y - 1] == '0')//如果该位置没有雷，则计算出其周围8个坐标雷的个数并标记在show棋盘对应位置
	{
		show[x - 1][y - 1] = GetMineCount(mine, x - 1, y - 1);
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = GetMineCount(mine, x - 1, y);
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = GetMineCount(mine, x - 1, y + 1);
	}
	if (mine[x][y - 1] == '0')
	{
		show[x][y - 1] = GetMineCount(mine, x, y - 1);
	}
	if (mine[x][y + 1] == '0')
	{
		show[x][y + 1] = GetMineCount(mine, x, y + 1);
	}
	if (mine[x + 1][y - 1] == '0')
	{
		show[x + 1][y - 1] = GetMineCount(mine, x + 1, y - 1);
	}
	if (mine[x - 1][y] == '0')
	{
		show[x - 1][y] = GetMineCount(mine, x - 1, y);
	}
	if (mine[x - 1][y + 1] == '0')
	{
		show[x - 1][y + 1] = GetMineCount(mine, x - 1, y + 1);
	}
}


//扫雷的过程函数
void FindMine(char mine[ROWS][COLS],
	char show[ROWS][COLS],
	int row,
	int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL - easy_count)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断x,y坐标处是否是雷
			if (mine[x][y] == '1')
			{
				printf("抱歉，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//如果x,y坐标不是雷，就统计周围有几个雷
				int count = GetMineCount(mine, x, y);
				show[x][y] = count;//这里的count统计出来的是数字，而show棋盘里显示雷的个数的数字其实是个字符，数字转换成字符+‘0’即可
				expand(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标输入错误，请重新输入\n");
		}
	}
	if (win == ROW*COL - easy_count)
	{
		printf("恭喜你，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}