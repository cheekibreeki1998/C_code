#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char*s1, const char* s2)
{
	assert(s1);
	assert(s2);

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main()
{
	int ret = my_strcmp("abcde", "abcdef");
	if (ret<0)
	{
		printf("小于\n");
	}
	else if (ret == 0)
	{
		printf("等于\n");
	}
	else if (ret>0)
	{
		printf("大于\n");
	}
	return 0;
}