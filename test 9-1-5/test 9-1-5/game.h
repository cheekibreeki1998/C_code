#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define easy_count 10

//��ʼ�����̺���������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ���̺���������
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//�����׵ĺ���������
void SetMine(char mine[ROWS][COLS], int row, int col);
//ɨ�׵ĺ���������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//Ŀ������׾�������չ�ĺ���������
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

