#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//1.��ӡ��Ϸ��ʼ����˵�
void menu()
{
	printf("    ��ʼ��Ϸ\n          ");
	printf("        1.��ģʽ\n         ");
	printf("        2.����ģʽ\n        ");
	printf("        3.�˳���Ϸ            ");
}

void game1()//��������Ϸ����ģʽ��
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//����һ������
	InitBoard(board, ROW, COL);//��ʼ������Ϊ�ո�
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)//����Ϸ����
	{
		Playermove(board, ROW, COL);//�����һ��
		//������Ϸ�Ľ�֣�
		//1.���ʤ�������ж���Ӯ�ĺ������ء�X��
		//2.����ʤ�������ж���Ӯ�ĺ������ء�O��
		//3.ƽ�֣����ж���Ӯ�ĺ������ء�Q��
		//4.��Ϸ���������ж���Ӯ�ĺ������ء�C��
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')//����һ���ж���Ӯ�ĺ���
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//��һ���ʹ�ӡһ������
		Computermove1(board, ROW, COL);//������һ��
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//��һ���ʹ�ӡһ������
	}
	if (ret == 'X')
	{
		printf("���ʤ\n");
	}
	else if (ret == 'O')
	{
		printf("����ʤ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
void game2()//��������Ϸ������ģʽ��
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//����һ������
	InitBoard(board, ROW, COL);//��ʼ������Ϊ�ո�
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)//����Ϸ����
	{
		Playermove(board, ROW, COL);//�����һ��
		//������Ϸ�Ľ�֣�
		//1.���ʤ�������ж���Ӯ�ĺ������ء�X��
		//2.����ʤ�������ж���Ӯ�ĺ������ء�O��
		//3.ƽ�֣����ж���Ӯ�ĺ������ء�Q��
		//4.��Ϸ���������ж���Ӯ�ĺ������ء�C��
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')//����һ���ж���Ӯ�ĺ���
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//��һ���ʹ�ӡһ������
		Computermove2(board, ROW, COL);//������һ��
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);//��һ���ʹ�ӡһ������
	}
	if (ret == 'X')
	{
		printf("���ʤ\n");
	}
	else if (ret == 'O')
	{
		printf("����ʤ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1://��ģʽ����Ϸ
			game1();
			break;
		case 2://����ģʽ����Ϸ
			game2();
			break;
		case 3://�˳���Ϸ
			printf("�˳���Ϸ\n");
			break;
		default://�������
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}