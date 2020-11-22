#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//qsort排序整型
void cmp_int(const void *e1, const void *e2)
{
	return *(int*)e1 - *(int*)e2;
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

void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	bubble_sort(arr, sz, 4, cmp_int);
	print_arr(arr, sz);
}
//qsort排序结构体
struct s
{
	char name[20];
	int score;
	int age;
};
int cmp_student_name(const void *e1, const void *e2)
{
	return strcmp(((struct s*)e1)->name, ((struct s*)e2)->name);
}
int cmp_student_score(const void *e1, const void *e2)
{
	return ((struct s*)e1)->score - ((struct s*)e2)->score;
}

int cmp_student_age(const void *e1, const void *e2)
{
	return ((struct s*)e1)->age - ((struct s*)e2)->age;
}

void test2()
{
	struct s arr[] = { { "zhangsan", 100, 20 }, { "lisi", 85, 30 }, { "zhangwei", 2, 100 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_student_name);
}

void test3()
{
	struct s arr[] = { { "zhangsan", 100, 20 }, { "lisi", 85, 30 }, { "zhangwei", 2, 100 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_student_score);
}

void test4()
{
	struct s arr[] = { { "zhangsan", 100, 20 }, { "lisi", 85, 30 }, { "zhangwei", 2, 100 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_student_age);
}

void _Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}

void bubble_sort(void*base,int sz,int width,
	             int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				_Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}
