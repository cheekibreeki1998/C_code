#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int SodaNumber(int a)
{
	int soda = a;
	int bottle = a;
	while (bottle >= 2)
	{
		soda += bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	return soda;
}

int main()
{
	int m = 0;
	printf("«Î ‰»Î«Æ ˝£∫");
	scanf("%d", &m);
	printf("%d\n", SodaNumber(m));
	return 0;
}