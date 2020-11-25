#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	my_strcat(arr1, "world");
	printf("%s\n", arr1);
	printf("%s\n", my_strcat(arr1, "world"));
	return 0;
}
