#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()//整数的比较
{
	int a, b;
	printf("请输入第一个数:\n");
	scanf("%d", &a);
	printf("请输入第二个数：\n");
	scanf("%d", &b);
	if (a > b)
	{
		printf("较大的数是%d\n", a);
	}
	else
	{
		printf("较大的数是%d\n", b);
	}
	return 0;
}
//int main()//小数的比较
//{
//	float a, b;
//	printf("请输入第一个数:\n");
//	scanf("%f", &a);
//	printf("请输入第二个数：\n");
//	scanf("%f", &b);
//	if (a > b)
//	{
//		printf("较大的数是%f\n", a);
//	}
//	else
//	{
//		printf("较大的数是%f\n", b);
//	}
//	return 0;
//}