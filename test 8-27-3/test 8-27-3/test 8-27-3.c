#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//非递归方式求斐波那契数字
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	for (i = 1; i <= (n-2); i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要查找第几个斐波那契数字：");
//	scanf("%d", &n);
//	int num = Fib(n);
//	printf("%d ", num);
//	return 0;
//}
//递归方式求斐波那契数字
int Fib( int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("请输入要查找第几个斐波那契数字：");
	scanf("%d", &n);
	int num = Fib(n);
	printf("%d ", num);
	return 0;
}