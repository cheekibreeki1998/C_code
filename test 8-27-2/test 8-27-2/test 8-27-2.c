#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//非递归方式实现strlen
//int get_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "1234567";
//	int len = get_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//递归方式实现strlen
int get_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + get_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "1234567";
	int len = get_strlen(arr);
	printf("%d\n", len);
	return 0;
}