#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	printf("请输入要打印的行数：");
	scanf("%d", &n);
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf("%d*%d=%2d ", x, y, x * y);
		}
		printf("\n");
	}
	return 0;
}