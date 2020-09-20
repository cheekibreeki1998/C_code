#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void my_exchange(int arr1[], int arr2[], int sz1)
{
	int i = 0;
	for (i = 0; i < sz1; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
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
int main()
{
	int arr1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr1[0]);
	printf("交换前的两个数组内容:\n");
	print(arr1, sz1);
	printf("\n");
	print(arr2, sz2);
	my_exchange(arr1, arr2, sz1, sz2);
	printf("\n");
	printf("交换后的两个数组内容:\n");
	print(arr1, sz1);
	printf("\n");
	print(arr2, sz2);
	return 0;
}