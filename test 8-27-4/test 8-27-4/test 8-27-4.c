#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ǵݹ鷽ʽʵ��n��k�η�
//int my_power(n, k)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 0; i < k; i++)
//	{
//		s *= n;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������Ҫ���������Ӧ�Ĵη���");
//	scanf("%d %d", &n, &k);
//	int num = my_power(n, k);
//	printf("%d\n", num);
//	return 0;
//}
//�ݹ鷽ʽʵ��n��k�η�
int my_power(n, k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * my_power(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	printf("������Ҫ���������Ӧ�Ĵη���");
	scanf("%d %d", &n, &k);
	int num = my_power(n, k);
	printf("%d\n", num);
	return 0;
}