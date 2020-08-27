#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap_year(x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (is_leap_year(a) == 1)
	{
		printf("是闰年 ");
	}
	else
	{
		printf("不是闰年 ");
	}
	return 0;
}