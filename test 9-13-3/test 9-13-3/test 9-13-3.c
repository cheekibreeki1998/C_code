#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("������Ҫ��ӡ�����֣�");
	scanf("%d", &a);
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);//ż��λ�Ĵ�ӡ
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);//����λ�Ĵ�ӡ
	}
	printf("\n");
	return 0;
}