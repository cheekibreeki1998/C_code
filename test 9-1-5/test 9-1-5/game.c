#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ�����̺�����ʵ��
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

//��ӡ���̺�����ʵ��
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------------------------------\n");
	for (i = 0; i <= col; i++)//�кŵĴ�ӡ
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//�кŵĴ�ӡ
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
}

//�����׵ĺ�����ʵ��
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;//����10���ף������������
	while (count)//ÿ����1����count��--
	{
		//1.��������׵�����
		int x = rand()%row+1;//1-9�ĺ�����
		int y = rand()%col+1;//1-9��������
		//2.������
		if (board[x][y] == '0')//'0'��������
		{
			board[x][y] = '1';//��1��������
			count--;
		}
	}
}

//ɨ�׵ĺ�����ʵ�֣�
//ͳ�����׵����긽���׵ĸ����ĺ���
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

//Ŀ���������׾���չ�ĺ���
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (mine[x - 1][y - 1] == '0')//�����λ��û���ף�����������Χ8�������׵ĸ����������show���̶�Ӧλ��
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


//ɨ�׵Ĺ��̺���
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
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж�x,y���괦�Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("��Ǹ���㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//���x,y���겻���ף���ͳ����Χ�м�����
				int count = GetMineCount(mine, x, y);
				show[x][y] = count;//�����countͳ�Ƴ����������֣���show��������ʾ�׵ĸ�����������ʵ�Ǹ��ַ�������ת�����ַ�+��0������
				expand(mine, show, x, y);
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���������������������\n");
		}
	}
	if (win == ROW*COL - easy_count)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}