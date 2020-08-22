#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//什么是闰年？（能被400整除或者能被4整除并且不能被100整除的年份）
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf(" %d ", year);
		}
	}
	return 0;
}