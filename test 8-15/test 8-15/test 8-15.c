#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 240");
again:
	printf("��ע�⣬��ĵ��Խ���4���Ӻ�ػ���������룺��������ȡ���ػ�!\n");
	printf("�����룺>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}