#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 0;
	for (int n = 1; n <= 100; n++)
	{
		if (n % 10 == 9)//��λ����9�ĸ���
		{
			count++;
		}
		if (n / 10 == 9)//ʮλ����9�ĸ���
		{
			count++;
		}
	}
	printf("9�ĸ�����:%d", count);
	return 0;
}