#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, n = 1;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += n*1.0 / i;
		n = -n;
	}
	printf("%f", sum);
	return 0;
}