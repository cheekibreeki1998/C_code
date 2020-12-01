#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
void* my_memcpy(void*dest, const void*src, size_t count)
{
	void*ret = dest;
	assert(dest);
	assert(src);

	while (count--)
	{
		//¿½±´Ò»¸ö×Ö½Ú
		*(char*)dest = *(char*)src;
		dest = (char*)dest+1;
		src = (char*)src+1;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//my_memcpy(arr1+2, arr1, 16);
	return 0;
}