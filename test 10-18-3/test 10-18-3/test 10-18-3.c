#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* arr)
{
	assert(arr != NULL);
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	return 0;
}
int main()
{
	char arr[] = "hello bit";
	printf("%d\n", my_strlen(arr));
	return 0;
}
