#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ѭ����ʽ����N�Ľ׳� 
int Fac(int n)
{
	int i = 0;
	int num = 1;
	for (i = 1; i <= n; i++)
	{
		num *= i;
	}
	return num;
}
int main()
{
	int n = 0;
	printf("������Ҫ����Ľ׳����֣�");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}

//�ݹ鷽ʽ����N�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������Ҫ����Ľ׳����֣�");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}