#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//�������̵��к��У�
#define ROW 3
#define COL 3

//�����������֣�
//1.��ʼ�����̺���������
void InitBoard(char board[ROW][COL], int row, int col);
//2.��ӡ���̺���������
void DisplayBoard(char board[ROW][COL], int row, int col);
//3.������ӵĺ���������
void Playermove(char board[ROW][COL], int row, int col);
//4.�������ӵĺ���������(��ģʽ)
void Computermove1(char board[ROW][COL], int row, int col);
//5.�������ӵĺ���������(����ģʽ)
void Computermove2(char board[ROW][COL], int row, int col);
//6.�ж���Ϸ��Ӯ����������
char CheckWin(char board[ROW][COL], int row, int col);