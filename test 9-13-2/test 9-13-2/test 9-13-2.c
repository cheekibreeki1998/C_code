#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	printf("������Ҫ�Ƚϵ���������");
	scanf("%d %d", &m, &n);
	int i = m^n;
	int count = 0;
	while (i)
	{
		i = i&(i - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}