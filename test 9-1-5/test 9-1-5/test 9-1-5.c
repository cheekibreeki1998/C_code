#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
 
void menu()
{
	printf("*******************************\n");
	printf("*********1.��ʼ��Ϸ************\n");
	printf("*********2.�˳���Ϸ************\n");
	printf("*******************************\n");
}


void game()
{
	char mine[ROWS][COLS] = {0};//��Ų��úõ���
	char show[ROWS][COLS] = {0};//����Ų�����׵���Ϣ
	InitBoard(mine, ROWS, COLS, '0');//��ʼ�������׵����̵ĺ���
	InitBoard(show, ROWS, COLS, '*');//��ʼ���Ų�����׵����̵ĺ���
	DisplayBoard(show, ROW, COL);//��ӡ�Ų�����׵ĺ���
	//DisplayBoard(mine, ROW, COL);////���úõ��ײ��ܴ�ӡ
	//1.������
	SetMine(mine, ROW, COL);//�����׵ĺ���
	DisplayBoard(mine, ROW, COL);//
	//2.ɨ��
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������������׵�����
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}