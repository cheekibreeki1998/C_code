#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void qsort(
	void *base,
	size_t num,
	size_t width,
	int(__cdecl *compare)(const void *elem1, const void *elem2)//elem1 elem2要比较元素的地址
	);

int cmp_int(const void *elem1, const void *elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;
}