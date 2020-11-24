#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdefg";
	printf("%d\n", my_strlen(arr));
	return 0;
}