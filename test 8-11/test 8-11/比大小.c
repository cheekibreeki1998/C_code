#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()//�����ıȽ�
{
	int a, b;
	printf("�������һ����:\n");
	scanf("%d", &a);
	printf("������ڶ�������\n");
	scanf("%d", &b);
	if (a > b)
	{
		printf("�ϴ������%d\n", a);
	}
	else
	{
		printf("�ϴ������%d\n", b);
	}
	return 0;
}
//int main()//С���ıȽ�
//{
//	float a, b;
//	printf("�������һ����:\n");
//	scanf("%f", &a);
//	printf("������ڶ�������\n");
//	scanf("%f", &b);
//	if (a > b)
//	{
//		printf("�ϴ������%f\n", a);
//	}
//	else
//	{
//		printf("�ϴ������%f\n", b);
//	}
//	return 0;
//}