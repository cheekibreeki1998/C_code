#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 0;
	for (int n = 1; n <= 100; n++)
	{
		if (n % 10 == 9)//个位数的9的个数
		{
			count++;
		}
		if (n / 10 == 9)//十位数的9的个数
		{
			count++;
		}
	}
	printf("9的个数是:%d", count);
	return 0;
}