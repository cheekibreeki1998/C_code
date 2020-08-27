#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int swap(int *px, int *py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
	return 0;
}
int main()
{
	int x, y = 0;
	printf("请输入要交换的两个整数：");
	scanf("%d%d", &x, &y);
	printf("交换前：x = %d y = %d\n", x, y);
	swap(&x, &y);
	printf("交换后：x = %d y = %d\n", x, y);
	return 0;
}