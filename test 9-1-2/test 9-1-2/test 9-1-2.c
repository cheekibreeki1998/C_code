#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void init(int arr[], int sz )
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
	}
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr,sz);
	return 0;
}