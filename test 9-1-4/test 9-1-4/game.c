#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������ʵ�ֲ��֣�
//1.��ʼ������ȫ��Ϊ�ո�����ʵ��
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

//2.��ӡ���̺�����ʵ�֣�1.���������� 2.���̵ķָ��У�
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ�����ڵ�������
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡһ�����ݴ�ӡһ��|����|����Ҫ��ӡ
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ������ķָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
			//��ӡһ���ָ��д�ӡһ��|����|����Ҫ��ӡ
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

//3.������Ӻ�����ʵ��
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������ˣ�������Ҫ���ӵ�����:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//ȷ���û����ӵ������ǺϺ����̲��õ�
		{
			if (board[x - 1][y - 1] == ' ')//������Ϸ���ǰ�����жϸ������Ƿ�ռ��
			{
				board[x - 1][y - 1] = 'X';//����Ϸ���û�б�ռ�õ�ʱ����ʾһ����X���������û������
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã�����������!\n");//��������Ϸ��������Ѿ���ռ��
			}
		}
		else
		{
			printf("�����������Ƿ�������������!\n");//�������겻�Ϸ�����ʾ�û���������
		}
	}
}

//4.�������ӵĺ�����ʵ��(��ģʽ)
void Computermove1(char board[ROW][COL], int row, int col)
{
	printf("�õ����ߣ����Ե�������:\n");
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

//5.�������ӵĺ�����ʵ��(����ģʽ)
void Computermove2(char board[ROW][COL], int row, int col)
{
	printf("�õ����ߣ����Ե�������:\n");
	int x = 1;
	int y = 1;
	while (1)
	{
		for (x = 1; x <= 3; x++)//�����������������һ����ʱ����ס
		{
			for (y = 1; y <= 3; y++)
			{
				if (board[x][y] == ' ')
				{
					board[x][y] = 'X';
					if (CheckWin(board, ROW, COL) == 'X')
					{
						board[x][y] = 'O';//һ�����ӣ���ֱ������whileѭ�������涼һ��
						break;
					}
					else
						board[x][y] = ' ';//�������������ԾͲ�����
				}

			}
		}
		if (board[2][2] == ' ')//����м�������ӣ����м�����
		{
			board[2][2] = 'O';
			return 0;
			break;
		}
		else //����ĸ��ǿ������ӣ����ĸ��������ӡ�
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
			x = rand() % ROW;//�ĸ��ߵ��м�������ӣ�0��2
			y = rand() % COL;
			if (board[x][y] == ' ')
			{
				board[x][y] = 'O';
				break;
			}
		}
	}
}






//6.�ж���Ϸ��Ӯ������ʵ��
//�ж��Ƿ�ƽ����Ҫ���һ�������ж�������û������ʵ��
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
				return 0;//�������пո�˵��û��
			}
		}
	}
	return 1;//����û�ո�����
}
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//���Ƿ���3��������ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//���Ƿ���3��������ͬ
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ����Ƿ���3��������ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�Ϊƽ��
	if (IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	//���������������������Ϸ�ͼ���
	return 'C';
}
