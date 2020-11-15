#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int sum = 0;
		int tmp = i;
		int count = 1;
		while (tmp /= 10)
		{
			count++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}