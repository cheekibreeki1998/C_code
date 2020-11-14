#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(int*p, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *p++);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	print(arr, n);
	return 0;
}