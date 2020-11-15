#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	char tmp = 0;
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	reverse(arr, arr+k-1);
	reverse(arr+k, arr + len - 1);
	reverse(arr, arr+len-1);
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	printf("%s\n", arr);
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}