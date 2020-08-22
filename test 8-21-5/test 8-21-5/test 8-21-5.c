#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("10个数中最大值为：%d ", max);
	return 0;
}