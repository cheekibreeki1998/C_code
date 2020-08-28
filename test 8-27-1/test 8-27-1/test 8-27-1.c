#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//循环方式计算N的阶乘 
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
	printf("请输入要计算的阶乘数字：");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}

//递归方式计算N的阶乘
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
//	printf("请输入要计算的阶乘数字：");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}