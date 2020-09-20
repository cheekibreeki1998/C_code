#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int My_Exchange(int *pa, int *pb)
{
	*pa = *pa^*pb;
	*pb = *pa^*pb;
	*pa = *pa^*pb;
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入要交换的两个数字：");
	scanf("%d %d", &a, &b);
	printf("交换前a = %d b = %d\n", a, b);
	My_Exchange(&a, &b);
	printf("交换后a = %d b = %d", a, b);
	return 0;
}