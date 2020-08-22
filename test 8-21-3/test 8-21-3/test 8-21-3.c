#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//什么叫素数？（一个大于1的自然数，除了1和它自身以外，不能被其他自然数整除的数叫做素数）
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		int i = 0;
		for (i = 2; i < n; i++)
		{
		 if (n % i == 0)
				break;
		}
		 if (i == n)
		{
			printf("%d ", n);
		}
	}
	return 0;
}