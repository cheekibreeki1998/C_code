#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(ret != NULL);
	assert(src != NULL);
	while (*ret++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char arr[] = "123456";
	printf("%s\n", my_strcpy(arr, "abcdef"));
	return 0;
}