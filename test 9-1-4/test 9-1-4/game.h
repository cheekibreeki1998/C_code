#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//定义棋盘的行和列：
#define ROW 3
#define COL 3

//声明函数部分：
//1.初始化棋盘函数的声明
void InitBoard(char board[ROW][COL], int row, int col);
//2.打印棋盘函数的声明
void DisplayBoard(char board[ROW][COL], int row, int col);
//3.玩家落子的函数的声明
void Playermove(char board[ROW][COL], int row, int col);
//4.电脑落子的函数的声明(简单模式)
void Computermove1(char board[ROW][COL], int row, int col);
//5.电脑落子的函数的声明(困难模式)
void Computermove2(char board[ROW][COL], int row, int col);
//6.判断游戏输赢函数的声明
char CheckWin(char board[ROW][COL], int row, int col);