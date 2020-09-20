#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Count_One(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int input = 0;
	printf("请输入要查看的数:");
	scanf("%d", &input);
	int ret = Count_One(input);
	printf("%d\n", ret);
	return 0;
}